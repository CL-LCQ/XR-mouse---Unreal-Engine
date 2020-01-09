

#include "Serial.h"
#include "Engine/Engine.h"
#include "Kismet/KismetMathLibrary.h"
#include <stdio.h>
#include <windows.h>
#include <devguid.h>
#include <iostream>
#include <string>
#include "UnrealString.h"


#pragma warning( disable : 4068 )

#define BOOL2bool(B) B == 0 ? false : true



bool wasPressed = false;
bool isPressed = false;
int pushTracker = 0;
float theScale = 1.0f;
FVector startLocation;
FVector EulerAngles;
FVector previousEuler;
bool isInit = false;
bool readyFlag = false;
bool dataReceived = false;

FVector previousPos;
float time;
float deltaTime;
FVector velocity;
float sensitivity = 0.5f; //between 0.1 an 1.0

//USceneComponent* object;
AActor* object;
int32 nPort;
TArray<FString> portList;
PSP_DEVICE_INTERFACE_DETAIL_DATA	detailData;


USerial* USerial::OpenComPort(bool &bOpened, AActor* target)
{

	

	//initial object could be called at init instead
	if (target != NULL) {
		object = target;
		startLocation = target->GetActorLocation();
		previousEuler = FVector(0, 0, 0);
		
		UE_LOG(LogTemp, Error, TEXT("Initial Location is: %d"), startLocation.Y);
	
	}


	

	USerial* Serial = NewObject<USerial>();
	bOpened = Serial->Open();
	return Serial;
}



bool USerial::Open()
{
	
	
	
	 
	//int32 nBaud = 9600;
	//int timeout = 7; //tbd

	int32 nBaud =19200; //works well
	int timeout = 7;

	//int32 nBaud =57600; //works well for 2.3mn
	//int timeout = 5;


	//int32 nBaud = 115200;
	//int timeout = 3; //5 is fine but serial stops streaming after 15s

	bool foundDevice = vid();

	if (nPort < 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid port number: %d"), nPort);
		return false;
	}
	if (m_hIDComDev)
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to use opened Serial instance to open a new one. "
			"Current open instance port: %d | Port tried: %d"), m_Port, nPort);
		return false;
	}

	FString szPort;
	if (nPort < 10)
		szPort = FString::Printf(TEXT("COM%d"), nPort);
	else
		szPort = FString::Printf(TEXT("\\\\.\\COM%d"), nPort);
	DCB dcb;


	
	
	
	if (foundDevice == true) {
		
		m_hIDComDev = CreateFile(*szPort, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, NULL);
	
	}

	if (m_hIDComDev == NULL)
	{
		unsigned long dwError = GetLastError();
		UE_LOG(LogTemp, Error, TEXT("Failed to open port COM%d (%s). Error: %08X"), nPort, *szPort, dwError);
		return false;
	}



	FMemory::Memset(&m_OverlappedRead, 0, sizeof(OVERLAPPED));
	FMemory::Memset(&m_OverlappedWrite, 0, sizeof(OVERLAPPED));

	COMMTIMEOUTS CommTimeOuts;

	CommTimeOuts.ReadIntervalTimeout = timeout;
	
	CommTimeOuts.ReadTotalTimeoutMultiplier = 0;
	CommTimeOuts.ReadTotalTimeoutConstant = 0;
	CommTimeOuts.WriteTotalTimeoutMultiplier = 0;
	CommTimeOuts.WriteTotalTimeoutConstant = timeout;
	SetCommTimeouts(m_hIDComDev, &CommTimeOuts);

	m_OverlappedRead.hEvent = CreateEvent(NULL, true, false, NULL);
	m_OverlappedWrite.hEvent = CreateEvent(NULL, true, false, NULL);

	dcb.DCBlength = sizeof(DCB);
	GetCommState(m_hIDComDev, &dcb);
	dcb.BaudRate = nBaud;
	dcb.ByteSize = 8;

	if (!SetCommState(m_hIDComDev, &dcb) ||
		!SetupComm(m_hIDComDev, 10000, 10000) ||
		m_OverlappedRead.hEvent == NULL ||
		m_OverlappedWrite.hEvent == NULL)
	{
		unsigned long dwError = GetLastError();
		if (m_OverlappedRead.hEvent != NULL) CloseHandle(m_OverlappedRead.hEvent);
		if (m_OverlappedWrite.hEvent != NULL) CloseHandle(m_OverlappedWrite.hEvent);
		CloseHandle(m_hIDComDev);
		m_hIDComDev = NULL;
		UE_LOG(LogTemp, Error, TEXT("Failed to setup port COM%d. Error: %08X"), nPort, dwError);
		return false;
	}

	
	UE_LOG(LogTemp, Error, TEXT("port setup successful"));
	




	//FPlatformProcess::Sleep(0.05f);
	AddToRoot();
	m_Port = nPort;
	m_Baud = nBaud;
	return true;
}


 TArray<uint8> USerial::ReadBytes(int32 Limit)
{


	TArray<uint8> Data;

	//if no hidcomdev end
	if (!m_hIDComDev) return Data;

	//empty the byffer
	Data.Empty(Limit);

	//create a buffer with the limits
	uint8* Buffer = new uint8[Limit];
	bool bReadStatus;
	unsigned long dwBytesRead, dwErrorFlags;
	COMSTAT ComStat;


	ClearCommError(m_hIDComDev, &dwErrorFlags, &ComStat);

	if (!ComStat.cbInQue) return Data;

	bReadStatus = BOOL2bool(ReadFile(
		m_hIDComDev,
		Buffer,
		Limit,
		&dwBytesRead,
		&m_OverlappedRead));

	if (!bReadStatus)
	{
		if (GetLastError() == ERROR_IO_PENDING)
		{

			//WaitForSingleObject(m_OverlappedRead.hEvent, INFINITE);
			WaitForSingleObject(m_OverlappedRead.hEvent, 2000);
		}
		else
		{
			return Data;
		}
	}


	Data.Append(Buffer, Limit);
	
	return Data;
}

 void USerial::connectXRmouse(bool & bSuccess, FVector & OutPosition, FRotator & OutOrientation)
{

	 //have a loop that checks for data
	 while (readyFlag == false) {

		 TArray<uint8> DataFlag;
		 
		 DataFlag = USerial::ReadBytes(1);

		 int test = DataFlag.Num();

		 if (test >0) {
		 //send  something

			 UE_LOG(LogTemp, Log, TEXT("byte is: %d."), DataFlag[0]);

			 FString String;
			 String = "k";
			 auto Convert = FTCHARToUTF8(*String);
			 TArray<uint8> bytex;
			 bytex.Append((uint8*)Convert.Get(), Convert.Length());
			 WriteBytes(bytex);

		//then 

		 previousPos = startLocation;

		 readyFlag = true;
		 dataReceived = true;
		 
		 }
		 else {

			 UE_LOG(LogTemp, Log, TEXT("no readyFlag received"));
		 }
		
	 }

	 if (readyFlag == true && dataReceived == true) {

		 //write
		 FString String;
		 String = "kk";
		 auto Convert = FTCHARToUTF8(*String);
		 TArray<uint8> bytex;
		 bytex.Append((uint8*)Convert.Get(), Convert.Length());
		 WriteBytes(bytex);
	 }

	//then read
	TArray<uint8> Data;
	Data = USerial::ReadBytes(30);
	
	
	//read data

	int size = Data.Num() - 2;
	bSuccess = false;


	//print the data
	/*	for (int i = 0; i < size; i++) {

			UE_LOG(LogTemp, Log, TEXT("byte %d. is: %d."), i, Data[i]);

		}*/


	if (size >= 26)
	{
		isInit = true;
		dataReceived = true;

		//create a recipient for conversion
		TArray<uint8> positionBytes;
		positionBytes.Init(0, 20);
		TArray<uint8> cobraBytes;
		cobraBytes.Init(0, 30);

		//pass the bytes to the arrays
		for (int i = 0; i < size; i++)
		{
			if (i < 7) {

				positionBytes[i + 2] = Data[i];
			}
			else {

				cobraBytes[i - 7] = Data[i];
			}

		}


		//check the data
		if (positionBytes[8] == 127) {

			bSuccess = true;
			

			//bitwise operations to reconstruct the data
			short x = (short)(positionBytes[2] << 8 | positionBytes[3]);
			short y = (short)(positionBytes[4] << 8 | positionBytes[5]);
			short z = (short)(positionBytes[6] << 8 | positionBytes[7]);

			//UE_LOG(LogTemp, Error, TEXT("X = %d. Y = %d. Z = %d."), x, y, z);

			//convert to floats
			float xF = (float)x / 10.0f;
			float yF = (float)y / 10.0f;
			float zF = (float)z / 10.0f;


			//do moving average filtering

			//
			//
			//xF = xF + previousPos.X / 2;
			//yF = yF + previousPos.Y / 2;
			//zF = zF + previousPos.Z / 2;


			//mouse sensitivity
			
			float nx = previousPos.X + (xF - previousPos.X)*sensitivity;
			float ny = previousPos.Y + (yF - previousPos.Y)*sensitivity;
			float nz = previousPos.Z + (zF - previousPos.Z)*sensitivity;


			previousPos = FVector(ny, nx, nz);

			OutPosition  = FVector(ny, nx, nz*1.4) * theScale;
			OutPosition += startLocation;

		}
		else {

			bSuccess = false;
		
		}

		if (cobraBytes[20] == 127) {

			

			if (cobraBytes[15] == 16) {
				//started to press
				isPressed = true;

			}
			if (isPressed == true && cobraBytes[15] != 16) {

				//pressed finished
				wasPressed = true;
				isPressed = false;
				UE_LOG(LogTemp, Log, TEXT("IN"));
			}

			if (wasPressed == true) {
				wasPressed = false;

				pushTracker += 1;
				UE_LOG(LogTemp, Log, TEXT("pressTracker = %d. "), pushTracker);

				if (pushTracker == 0) {
					theScale = 0.3;
				}
				else if (pushTracker == 1) {
					theScale = 2;

				}
				else if (pushTracker == 2) {
					theScale = 20;

				}
				else if (pushTracker == 3) {
					theScale = 400;

				}
				else {
					pushTracker = 0;
					theScale = 0.1;
				}

			}

			float Yaw, Pitch, Roll;

			TArray<uint8> gyroBuff;
			gyroBuff.Init(0, 3);

			gyroBuff[0] = cobraBytes[2];
			gyroBuff[1] = cobraBytes[3];
			gyroBuff[2] = cobraBytes[4];

			Yaw = gyroBuff[0] << 16 | gyroBuff[1] << 8 | gyroBuff[2];
			Yaw = Yaw / 10000.0f;

			if (Yaw > 1000)
			{
				Yaw -= 1317.0f;
			}



			gyroBuff[0] = cobraBytes[5];
			gyroBuff[1] = cobraBytes[6];
			gyroBuff[2] = cobraBytes[7];

			Pitch = gyroBuff[0] << 16 | gyroBuff[1] << 8 | gyroBuff[2];
			Pitch = Pitch / 10000.0f;

			if (Pitch > 1000)
			{
				Pitch -= 1317.0f;
			}



			gyroBuff[0] = cobraBytes[8];
			gyroBuff[1] = cobraBytes[9];
			gyroBuff[2] = cobraBytes[10];

			Roll = gyroBuff[0] << 16 | gyroBuff[1] << 8 | gyroBuff[2];
			Roll = Roll / 10000.0f;

			if (Roll > 1000)
			{
				Roll -= 1317.0f;
			}

			
			//Roll = previousEuler.X + (Roll - previousEuler.X)*sensitivity;
			//Pitch  = previousEuler.Y + (Pitch - previousEuler.Y)*sensitivity;
			//Yaw = previousEuler.Z + (Yaw - previousEuler.Z)*sensitivity;
			

			EulerAngles = FVector(Roll, Pitch, Yaw); //this is the correct order for unreal
			previousEuler = FVector(Roll, Pitch, Yaw);
			
			bSuccess = true;
		}
		else {
			bSuccess = false;
		}

		if (bSuccess == true) {
			UE_LOG(LogTemp, Log, TEXT("success"));
		}
		else {
			//UE_LOG(LogTemp, Error, TEXT("ERROR"));
		}

		//try to add the initial offset
		OutOrientation = UKismetMathLibrary::MakeRotator(EulerAngles.X, EulerAngles.Y, EulerAngles.Z);

		//set location
		//object->SetWorldLocationAndRotation(OutPosition, OutOrientation, false, 0, ETeleportType::None);

		//fix this error
		if (object) {
			object->SetActorLocationAndRotation(OutPosition, OutOrientation, false, 0, ETeleportType::None);
		}
		
	}
	else {

		dataReceived = false;

	}




}



float USerial::filterData(float input,float A){

	 float dy = 0;
	 float y = 0;

	dy = (input - y) / A;
	y = y + dy;
	return y;
}




USerial::USerial()
	: m_hIDComDev(NULL)
	, m_Port(-1)
	, m_Baud(-1)
	, WriteLineEnd(ELineEnd::n)
{
	FMemory::Memset(&m_OverlappedRead, 0, sizeof(OVERLAPPED));
	FMemory::Memset(&m_OverlappedWrite, 0, sizeof(OVERLAPPED));
}

USerial::~USerial()
{
	Close();
}


void USerial::Close()
{
	if (!m_hIDComDev) return;


	readyFlag = false;
	dataReceived = false;
	isInit = false;

	FString String;
	String = "kkkkk";
	auto Convert = FTCHARToUTF8(*String);
	TArray<uint8> bytex;
	bytex.Append((uint8*)Convert.Get(), Convert.Length());

	WriteBytes(bytex);

	if (m_OverlappedRead.hEvent != NULL) CloseHandle(m_OverlappedRead.hEvent);
	if (m_OverlappedWrite.hEvent != NULL) CloseHandle(m_OverlappedWrite.hEvent);
	CloseHandle(m_hIDComDev);
	m_hIDComDev = NULL;

	RemoveFromRoot();
}







void USerial::Flush()
{
	if (!m_hIDComDev) return;

	TArray<uint8> Data;

	do {
		Data = ReadBytes(8192);
	} while (Data.Num() > 0);
}

bool USerial::WriteBytes(TArray<uint8> Buffer)
{
	if (!m_hIDComDev) false;

	bool bWriteStat;
	unsigned long dwBytesWritten;

	bWriteStat = BOOL2bool(WriteFile(m_hIDComDev, Buffer.GetData(), Buffer.Num(), &dwBytesWritten, &m_OverlappedWrite));
	if (!bWriteStat && (GetLastError() == ERROR_IO_PENDING))
	{
		if (WaitForSingleObject(m_OverlappedWrite.hEvent, 1000))
		{
			dwBytesWritten = 0;
			return false;
		}
		else
		{
			GetOverlappedResult(m_hIDComDev, &m_OverlappedWrite, &dwBytesWritten, false);
			m_OverlappedWrite.Offset += dwBytesWritten;


			UE_LOG(LogTemp, Error, TEXT("sent %d bytes"), dwBytesWritten);
			return true;
		}
	}

	return true;
}


bool getComPortList()
{

	portList.Init("a", 31);
	bool test;
	for (int nPort = 1; nPort < 30; nPort++) {
		FString szPort;
		if (nPort < 10)
			szPort = FString::Printf(TEXT("COM%d"), nPort);
		else
			szPort = FString::Printf(TEXT("\\\\.\\COM%d"), nPort);


		HANDLE testSerial;
		
		testSerial = CreateFile(*szPort, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, NULL, NULL);
		if (testSerial == INVALID_HANDLE_VALUE)
		{
			test = false;
		}
		else
		{
			test = true;
			UE_LOG(LogTemp, Error, TEXT("port %s exists"), *szPort);
			//if the port exists add it to the array

			portList[nPort] = FString::Printf(TEXT("COM%d"), nPort);
			//compare with VID PID

		}
		CloseHandle(testSerial);
	}
	return test;
}






//vid PID
bool USerial::vid() {

	

	//////works for VID +PID

	int index;
	HDEVINFO hDevInfo;
	SP_DEVINFO_DATA DeviceInfoData;
	TCHAR HardwareID[1024];
	LONG								Result;
	//DWORD dwError;


	
	
	// List all connected USB devices
	
	hDevInfo = SetupDiGetClassDevs(NULL, 0, 0, DIGCF_PRESENT | DIGCF_ALLCLASSES | DIGCF_DEVICEINTERFACE);
	for (index = 0; ; index++) {

	

		
		DeviceInfoData.cbSize = sizeof(DeviceInfoData);

		if (!SetupDiEnumDeviceInfo(hDevInfo, index, &DeviceInfoData)) {
			UE_LOG(LogTemp, Error, TEXT("Failed first test"));
			return false;     // no match
		}


		Result = SetupDiGetDeviceRegistryProperty(hDevInfo, &DeviceInfoData, SPDRP_HARDWAREID, NULL, (BYTE*)HardwareID, sizeof(HardwareID), NULL);

		if (_tcsstr(HardwareID, _T("VID_10C4&PID_EA60"))) {
			UE_LOG(LogTemp, Error, TEXT("XR-mouse was found with VID & PID, trying ot get associated COM port..."));

			//device is found
			SetupDiGetDeviceRegistryProperty(hDevInfo, &DeviceInfoData, SPDRP_FRIENDLYNAME, NULL, (BYTE*)HardwareID, sizeof(HardwareID), NULL);
			std::string nameString = TCHAR_TO_UTF8(HardwareID);
			FString nameFString = UTF8_TO_TCHAR(nameString.c_str());
			UE_LOG(LogTemp, Error, TEXT("Friendly name is  %s"), *nameFString); //should be the COM port info
			

			//run a check in the port list
			getComPortList();

			for (int i = 0; i < portList.Num() ;i++) {
			
				FString checkPort = portList[i];

				if (checkPort != "a") {
					UE_LOG(LogTemp, Error, TEXT("checking list with port: %s"), *checkPort); //should be the COM port info



					//if contains COMXX -- /!\ it would be ideal to isolate COMXX in the string to avoid mistakes
					if (nameFString.Contains(checkPort)) {

						nPort = i;
						UE_LOG(LogTemp, Error, TEXT("Successfully found port  %d"), i);
						
						return true;
					}
				}
			
			}
			


			//Class is  Ports
			//GUID is corresponding to ports too ClassGuid = {4d36e978-e325-11ce-bfc1-08002be10318}
			//ui number  USB\VID_10C4&PID_EA60&REV_0100

			//
			//ULONG Required = 0;
			//ULONG Length = 0;

			//const GUID GUID_PORTS = { 0x4d36e978, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 };
			//
			//SP_DEVICE_INTERFACE_DATA devInterfaceData;
			//devInterfaceData.cbSize = sizeof(devInterfaceData);
			//
			//
			//	Result = SetupDiEnumDeviceInterfaces(hDevInfo, NULL, &GUID_PORTS, 0, &devInterfaceData);
			//	if (Result == 0) {
			//		dwError = GetLastError();
			//		UE_LOG(LogTemp, Error, TEXT("Failed with Error: %08X"),  dwError);
			//		return false;
			//	}
			//	

			//	
			//

			//
			//Result = SetupDiGetDeviceInterfaceDetail(hDevInfo, &devInterfaceData, NULL, 0, &Length, NULL);
			//detailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA)malloc(Length);
			//detailData->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
			//Result = SetupDiGetDeviceInterfaceDetail(hDevInfo, &devInterfaceData, detailData, Length,&Required, NULL);
			//if (Result == 0) {
			//	dwError = GetLastError();
			//	UE_LOG(LogTemp, Error, TEXT("Device interface detail failed with Error: %08X"), dwError);
			//	return false;
			//}
	

			//if (detailData->DevicePath != NULL) {

			//	SetupDiDestroyDeviceInfoList(hDevInfo);

			//	std::string guidString = TCHAR_TO_UTF8(detailData->DevicePath);
			//	FString GuidFString = UTF8_TO_TCHAR(guidString.c_str());
			//	UE_LOG(LogTemp, Error, TEXT("device path is  %s"), *GuidFString); //retunrs GUID
			//	foundDevice = true;
			//
			//	
			//	
			//}
			//
 
		}
	}

	return false;
}
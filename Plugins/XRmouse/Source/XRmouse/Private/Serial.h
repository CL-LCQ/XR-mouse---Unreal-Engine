#pragma once



#define FC_DTRDSR       0x01
#define FC_RTSCTS       0x02
#define FC_XONXOFF      0x04
#define ASCII_BEL       0x07
#define ASCII_BS        0x08
#define ASCII_LF        0x0A
#define ASCII_CR        0x0D
#define ASCII_XON       0x11
#define ASCII_XOFF      0x13


#define USE_SP_ALTPLATFORM_INFO_V1 1
#define USE_SP_ALTPLATFORM_INFO_V2 0
#define USE_SP_ALTPLATFORM_INFO_V3 0
#define USE_SP_DRVINFO_DATA_V1 1
#define USE_SP_BACKUP_QUEUE_PARAMS_V1 1
#define USE_SP_INF_SIGNER_INFO_V1 1

#include "Windows/AllowWindowsPlatformTypes.h"
#include "windows.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include "CoreTypes.h"
#include "Engine/Engine.h"
#include "Windows/COMPointer.h"
#include <SetupAPI.h>
#include "Serial.generated.h"

UENUM(BlueprintType, Category = "XRmouse")
enum class ELineEnd : uint8
{
	rn	UMETA(DisplayName = "\r\n"),
	n	UMETA(DisplayName = "\n"),
	r	UMETA(DisplayName = "\r"),
	nr	UMETA(DisplayName = "\n\r")
};

UCLASS(BlueprintType, Category = "XRmouse", meta = (Keywords = "XR mouse device"))
class USerial : public UObject
{
	GENERATED_BODY()

public:
	/** Determines the line ending used when writing lines to serial port with PrintLine. */
	UPROPERTY(BlueprintReadWrite, Category = "XRmouse | String")
	ELineEnd WriteLineEnd;

	TArray<uint8> ReadBytes(int32 Limit = 256);
	USceneComponent * Owner;
	AActor* Parent;



	USerial();
	~USerial();

	bool Open();
	bool vid();
	void Flush();
	bool IsOpened() { return m_hIDComDev != NULL; }
	bool WriteBytes(TArray<uint8> Buffer);
	float filterData(float input, float A);

	/**
	* Open a serial port and return the created Serial instance.
	* Don't forget to close the port before exiting the game.
	*
	* @param bOpened If the serial port was successfully opened.
	* @param Port The serial port to open.
	* @param BaudRate BaudRate to open the serial port with.
	* @return A Serial instance to work with the opened port.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Start device"), Category = "XRmouse", meta = (Keywords = "start device"))
		USerial* OpenComPort(bool &bOpened, AActor* target);
		// USerial* OpenComPort(bool &bOpened, USceneComponent* target);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close Port"), Category = "XRmouse", meta = (Keywords = "com end finish release"))
		void Close();

	/**
	* Open a serial port. Don't forget to close the port before exiting the game.
	* If this Serial instance has already an opened port,
	* return false and doesn't change the opened port number.
	*
	* @param Port The serial port to open.
	* @param BaudRate BaudRate to open the serial port with.
	* @return If the serial port was successfully opened.
	*/
	


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Connect XRmouse", keywords = "connects the XRmouse receive"), Category = "XRmouse")
	void connectXRmouse(bool &bSuccess, FVector &OutPosition, FRotator &OutOrientation);

	



	/** Clean the serial port by reading everything left to be read. */


	/**
	* Check if the serial port is open.
	* @return True if the serial port is open.
	*/







	
protected:
	void* m_hIDComDev;
	OVERLAPPED m_OverlappedRead, m_OverlappedWrite;

	int32 m_Port;
	int32 m_Baud;
	

};
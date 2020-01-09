// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XRM_content_plugin.generated.h"

UCLASS()
class XRM_PLUGIN_API AXRM_content_plugin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXRM_content_plugin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

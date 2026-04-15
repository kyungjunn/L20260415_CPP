// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	//UE_LOG(LogTemp, Warning, TEXT("안녕하세요"));
	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("안녕하세요"));
	//}

	DefaultPawnClass = AMyPawn::StaticClass(); // CDO
	PlayerControllerClass =	AMyPlayerController::StaticClass();
}


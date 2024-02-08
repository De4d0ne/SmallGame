// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharAniminstance.h"
#include "MainChar.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMainCharAniminstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if(Pawn)
		{
			MainChar = Cast<AMainChar>(Pawn);
		}
	}


}

void UMainCharAniminstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.0f);
		MovementSpeed = LateralSpeed.Size();

		bIsInAir = Pawn->GetMovementComponent()->IsFalling();

		if(MainChar == nullptr)
		{
			MainChar = Cast<AMainChar>(Pawn);
		}
	}
}
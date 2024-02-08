// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharAnimInstance.h"
#include "EnemyChar.h"

void UEnemyCharAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if(Pawn)
		{
			EnemyChar = Cast<AEnemyChar>(Pawn);
		}
	}
}

void UEnemyCharAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{

			EnemyChar = Cast<AEnemyChar>(Pawn);
		}
	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.0f);
		MovementSpeed = LateralSpeed.Size();
	}
}



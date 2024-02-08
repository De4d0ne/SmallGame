// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgressSaveGame.h"

UProgressSaveGame::UProgressSaveGame()
{
	PlayerName = TEXT("Default");
	UserSlotIndex = 0;

	CharacterStats.WeaponName = TEXT("");
	CharacterStats.LevelName = TEXT("");
}

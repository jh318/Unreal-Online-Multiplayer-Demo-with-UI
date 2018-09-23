// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()
public:
	void SetMenuInterface(IMenuInterface* MenuInterface);

	void Setup();
	void Teardown();
	
protected:
	virtual bool Initialize() override;

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuCancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* InGameMenuQuitButton;

	IMenuInterface* MenuInterface;
	
};

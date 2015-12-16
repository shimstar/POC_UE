// Fill out your copyright notice in the Description page of Project Settings.

#include "proj4101.h"
#include "MyGameInstance.h"

bool UMyGameInstance::ClientTravelToServer() {
	
	UEngine* const Engine = GetEngine();
	//FURL TestURL(&WorldContext->LastURL, TEXT("127.0.0.1"), TRAVEL_Absolute);
	//if (TestURL.IsLocalInternal())
	//{
		// make sure the file exists if we are opening a local file
		//if (Engine->MakeSureMapNameIsValid(TestURL.Map))
		{
			Engine->SetClientTravel(WorldContext->World(), TEXT("127.0.0.1"), TRAVEL_Absolute);
			return true;
		}
		//else {
	//		return false;
	//	}
	//}
//	else {
	//	return false;
	//}

	
}





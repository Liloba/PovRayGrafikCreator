#include "graphicManager.h"


void TGraphicManager::Init(){
	mLightSource = new TLightSource();
	mResultImage = new TPRImage();
	mCamera		 = new TCamera();
}

void TGraphicManager::DeInit(){
	delete mLightSource;
	delete mResultImage;
	delete mCamera;
}

bool TGraphicManager::CreatePovrayScript(){
	return true;
}

bool TGraphicManager::StartImageCalculation(){
	return true;
}
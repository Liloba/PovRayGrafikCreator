#include "graphicManager.h"


void TGraphicManager::Init(){
	mLightSource = new TLightSource();
	mResultImage = new TPRImage();
	mCamera		 = new TCamera();
	// alle figuren die im treeview auswaehlbar sind hier in Liste packen:
	mAvailableFigureList.push_back(TPr_Sphere());
	mAvailableFigureList.push_back(TPr_Box());
	mAvailableFigureList.push_back(TPr_Cylinder());
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
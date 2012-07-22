#include "graphicManager.h"


void TGraphicManager::Init(){
	mLightSource = new TLightSource();
	mResultImage = new TPRImage();
	mCamera		 = new TCamera();	
	mPathAndNameOfPovrayScript = "c:\\povrayScript.pov"; // Todo: hardcodet string vermeiden 
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

bool TGraphicManager::CreatePovrayImage(){
	return false;
   // erzeuge povRay file anhand der Figurenliste (mFigureList), der licht- und
	// Kameraeinstellungen (mLightSource,mCamera)
   if( CreatePovrayFile()){
		if(mResultImage)
			delete mResultImage;
		
		// wandle povRaySkript in Bild
		if( PovrayFileToImage() )
			return true;
	}		
}


bool TGraphicManager::CreatePovrayFile(){			
	mPovrayFile.open ("example.txt");
		
	// alle Figuren aus der Liste erzeugen Ihren eintrag:
	// for alle figuren in Liste{
	//   currFigur.writeToFile();
	// }
	mPovrayFile << "Writing this to a file.\n"; // test

	mPovrayFile.close();
	return true;
}

bool TGraphicManager::PovrayFileToImage(){
	return true;
}
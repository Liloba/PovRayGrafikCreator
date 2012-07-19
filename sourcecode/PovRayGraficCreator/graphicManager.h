/******************************************************************************
** @Filename: 	graphicManager.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include "povrayImage.h"
#include "lightSource.h"
#include "camera.h"

using namespace std;

class TGraphicManager{
private:
	// liste der verwendeten Figuren
	TLightSource *mLightSource;// Lichtquelle
	TCamera *mCamera;// Kameraeinstellung
	TPRImage *mResultImage;
	void Init();
	void DeInit();
public:
	// povray datei
	TGraphicManager(){
		Init();
	}
	~TGraphicManager(){
		DeInit();
	}
	bool CreatePovrayScript();
	bool StartImageCalculation();
};

#endif
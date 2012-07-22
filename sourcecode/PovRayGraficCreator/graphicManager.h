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
#include "gitObjects.h"
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;

class TGraphicManager{
private:
	vector<TPr_Object> mFigureList;			// liste der verwendeten Figuren
	TLightSource *mLightSource;// Lichtquelle
	TCamera *mCamera;// Kameraeinstellung
	TPRImage *mResultImage;
	string mPathAndNameOfPovrayScript;
	ofstream mPovrayFile;
	void Init();
	void DeInit();
public:
	vector<TPr_Object> mAvailableFigureList;	// liste aller Figuren die verfuegbar sind
											// zb zum anzeigen im Treeview
	// povray datei
	TGraphicManager(){
		Init();
	}
	~TGraphicManager(){
		DeInit();
	}
	bool CreatePovrayImage();
	bool CreatePovrayFile();
	bool PovrayFileToImage();	
};

#endif
/******************************************************************************
** @Filename: 	graphicManager.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include "povrayImage.h"
using namespace std;

class TGraphicManager{
	// liste der verwendeten Figuren
	// Lichtquelle
	// Kameraeinstellung
	TPRImage *mResultImage;
public:
	// povray datei
	bool CreatePovrayScript();
	bool StartImageCalculation();
};

#endif
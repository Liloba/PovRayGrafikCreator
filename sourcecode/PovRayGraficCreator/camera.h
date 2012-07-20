/******************************************************************************
** @Filename: 	camera.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef CAMERA_H
#define CAMERA_H

#include "gitObjects.h"
class TCamera{
private:
	TLocation *mLocation; // wo kamera steht
	TLocation *mLookAt; // wohin Kamera schaut
	// ToDo-> direction zb = 2*z
	void Init();
	void DeInit();
public:
	TCamera(){
		Init();
	}
	~TCamera(){
		DeInit();
	}
};

#endif

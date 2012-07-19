/******************************************************************************
** @Filename: 	camera.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef CAMERA_H
#define CAMERA_H

class TCamera{
private:
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

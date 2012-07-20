/******************************************************************************
** @Filename: 	lightSource.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef LIGHTSOURCE_H
#define LIGHTSOURCE_H

class TLightSource{
private:
	bool mshadowless;
	void Init();
	void DeInit();
public:
	TLightSource(){ 
		Init();
	};
	~TLightSource(){
		DeInit();
	}
};
#endif
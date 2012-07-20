#include "camera.h"

void TCamera::Init(){
	mLocation	= new TLocation;
	mLookAt		= new TLocation;
}

void TCamera::DeInit(){
	delete mLocation;
	delete mLookAt;
}
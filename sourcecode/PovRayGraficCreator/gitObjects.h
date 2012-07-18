/******************************************************************************
** @Filename: 	gitObjects.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 17.07.2012
******************************************************************************/
#ifndef GITOBJECTS_H
#define GITOBJECTS_H

#include <string>


using namespace std;

class TLocation{
public:
	int mX, mY, mZ;
	TLocation(){
		mX = mY = mZ = 0;		
	}
};

// allgemeines PovRay Object
class TPr_Object abstract{
public:
	TLocation *mLocation;
//	Bitmap mThumbnail;
	string mName;
//	??? mColor;
//	??? mStructure;
private:
	virtual void Init() = 0;
	virtual void DeInit() = 0;
public:
	TPr_Object(){ 
		Init();
	};
	~TPr_Object(){
		DeInit();
	}
	TLocation getLocation(){ 
		return *mLocation; 
	}
	string GetName(){
		return  mName;
	}
};

// Kugel
class TPr_Sphere:public TPr_Object{
private:
	int mRadius;
	void Init();
	void DeInit();
public:
	int GetRadius(){
		return mRadius;
	}
};

// Quader
class TPr_Box:public TPr_Object{
private:
	TLocation *mLocation2;
	void Init();
	void DeInit();
public:
	TLocation GetLocation2(){
		return *mLocation2;
	}
};

// Zylinder
class TPr_Cylinder:public TPr_Object{
private:
	TLocation *mLocation2;
	int mRadius;
	void Init();
	void DeInit();
public:
	TLocation GetLocation2(){
		return *mLocation2;
	}
	int GetRadius(){
		return mRadius;
	}
};
#endif
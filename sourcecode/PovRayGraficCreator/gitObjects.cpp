#include "gitObjects.h"

#define SPHERE_STR		"Kugel"
#define BOX_STR			"Box"
#define CYLINDER_STR	"Cylinder"

void TPr_Object::Init(){
	mName = "";	
}
void TPr_Object::DeInit(){	
}

// Kugel implementieren
void TPr_Sphere::Init(){
	mName = SPHERE_STR;
	mRadius = 0;
}
void TPr_Sphere::DeInit(){	
}

// Quader
void TPr_Box::Init(){
	mName = BOX_STR;
	mLocation2 = new TLocation();
}
void TPr_Box::DeInit(){
	delete mLocation2;
}

// Zylinder
void TPr_Cylinder::Init(){
	mName = CYLINDER_STR;
	mRadius = 0;
	mLocation2 = new TLocation;
}
void TPr_Cylinder::DeInit(){
	delete mLocation2;
}

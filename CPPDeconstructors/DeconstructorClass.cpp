#include <iostream>
#include "DeconstructorClass.h"

using namespace std;



DeconstructorClass::DeconstructorClass()
{
	cout << "This is my class coming from Deconstructor.cpp" << endl;
}


DeconstructorClass::~DeconstructorClass()
{
	cout << "This is the deconstructors message which runs after main is done" << endl;
}

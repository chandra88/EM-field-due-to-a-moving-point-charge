#ifndef __LWField__
#define __LWField__

#include<iostream>
#include<cmath>
#include "TVector3.h"
using namespace std;

class LWField
{
public:
	LWField() {}
	virtual ~LWField() {}

	// returns electric and magnetic field (in GeV) multiplied by magnitude of the charge of the electron, |e|.
	TVector3 getEField(TVector3 velocity, double t, TVector3 sourcePoint, TVector3 fieldPoint);
	TVector3 getBField(TVector3 velocity, double t, TVector3 sourcePoint, TVector3 fieldPoint);
};
#endif

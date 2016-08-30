#include "LWField.h"
#include "TVector3.h"

int main()
{
	TVector3 velVec(0.0, 0.0, 0.99);
	double time = 0.1;
	TVector3 sourcePoint(1.0, 1.0, 0.0);
	TVector3 fieldPoint(0.0, 0.0, 0.0);

	LWField *lw = new LWField();

	TVector3 eField = lw->getEField(velVec, time, sourcePoint, fieldPoint);
	TVector3 bField = lw->getBField(velVec, time, sourcePoint, fieldPoint);

	// with energy and mass, or rapidity of the particle
/*	const double energy = erg;
	const double pMass = 0.938;
	const double pz = sqrt(energy*energy - pMass*pMass);
	double rapidity = atanh(pz/energy);
	double velocity = tanh(rapidity);
	TVector3 velVec(0.0, 0.0, velocity);

	TVector3 eField = lw->getEField(velVec, time, sourcePoint, fieldPoint);
	TVector3 bField = lw->getBField(velVec, time, sourcePoint, fieldPoint);*/
}

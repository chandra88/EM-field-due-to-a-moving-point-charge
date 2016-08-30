#include "LWField.h"
#include <vector>
#include <cstdlib>
using namespace std;

TVector3 LWField::getEField(TVector3 velVec, double t, TVector3 sourcePoint, TVector3 fieldPoint)
{
	const double alpha = 1.0/137.0;

	double velocity = velVec.Mag();

	// factor (1.0*1000/197.3) to convert fm to GeV^-1
	const TVector3 R = (1.0*1000/197.3) * sourcePoint - fieldPoint - velocity * t;
	const TVector3 num = (1.0 - velocity*velocity) * R;

	double theta = R.Angle(velVec);
	double den = 1.0 - velocity*velocity*sin(theta)*sin(theta);
	den = pow(den, 1.5) * pow(R.Mag(), 3);

	TVector3 mag = alpha * (1.0/den) * num;
	return mag;
}


TVector3 LWField::getBField(TVector3 velVec, double t, TVector3 sourcePoint, TVector3 fieldPoint)
{
	TVector3 efield = getEField(velVec, t, sourcePoint, fieldPoint);
	return velVec.Cross(efield);
}

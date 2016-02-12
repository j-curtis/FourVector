//This is the definition file for the class FourVector 
//Jonathan Curtis
//02/12/2016

#include "FourVector.h"


FourVector::FourVector(double arg0, double arg1, double arg2, double arg3){
	t = arg0;
	x = arg1;
	y = arg2; 
	z = arg3;
}

double FourVector::operator *(const FourVector& lh, const FourVector& rh){
	double sumx = (rh.x)*(lh.x); 
	double sumy = (rh.y)*(lh.y);
	double sumz = (rh.z)*(lh.z);
	double sumt = (rh.t)*(lh.t);

	return sumx + sumy + sumz - sumt;
}

FourVector& FourVector::operator +(const FourVector& lh, const FourVector rh){
	FourVector sum(0.0,0.0,0.0,0.0);

	sum.t = (lh.t + rh.t);
	sum.x = (lh.x + rh.x);
	sum.y = (lh.y + rh.y);
	sum.z = (lh.z + rh.z);

	return &sum;
}

FourVector& FourVector::operator *(const double c, const FourVector& rh){
	FourVector vec(0.0,0.0,0.0,0.0);

	vec.t = c*(rh.t);
	vec.x = c*(rh.x);
	vec.y = c*(rh.y);
	vec.z = c*(rh.z);

	return &vec;
}
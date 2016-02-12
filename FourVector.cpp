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

double FourVector::operator *(const FourVector& rh){
	double sumx = (x)*(rh.x); 
	double sumy = (y)*(rh.y);
	double sumz = (z)*(rh.z);
	double sumt = (t)*(rh.t);

	return sumx + sumy + sumz - sumt;
}

FourVector FourVector::operator +(const FourVector& rh){
	FourVector sum(0.0,0.0,0.0,0.0);

	sum.t = (t + rh.t);
	sum.x = (x + rh.x);
	sum.y = (y + rh.y);
	sum.z = (z + rh.z);

	return sum;
}

FourVector operator *(const double c, const FourVector& rh){
	FourVector vec(0.0,0.0,0.0,0.0);

	vec.t = c*(rh.t);
	vec.x = c*(rh.x);
	vec.y = c*(rh.y);
	vec.z = c*(rh.z);

	return vec;
}

FourVector FourVector::operator -(const FourVector& rh){
	return ( (*this) + ( (-1.0)*rh ) );	//Subtraction as addition of additive inverse 
}


void FourVector::Print(){
	std::cout<<"("<<t<<", "<<x<<", "<<y<<", "<<z<<")";
}
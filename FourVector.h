//This is a header file for the class for four vectors
//Jonathan Curtis
//02/11/16

#include <iostream>
#include <fstream>

#ifndef FOURVECTOR_H
#define FOURVECTOR_H

class FourVector{
protected:
	double t;	//the time component (x0)
	double x;	//the x component of the vector
	double y; 	//the y component
	double z;	//the z component 

public:
	FourVector(double =0.0, double =0.0, double =0.0, double =0.0);	//This creates a four-vector given components
	//components are given as 
	//t x y z 
	//Default values are zeros

	double operator *(const FourVector&,const FourVector&);	//The Lorentz invaraint contraction of two fourvectors
	FourVector& operator +(const FourVector&, const FourVector&);	//This adds two fourvectors component-wise
	FourVector& operator *(const double,const FourVector&);	//Scalar multiplication of four vectors 
	FourVector& operator -(const FourVector& lh, const FourVector& rh);	//This subtracts two fourvectors component wise 
};
#endif

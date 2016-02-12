//This is a header file for the class for four vectors
//Jonathan Curtis
//02/11/16

#include <iostream>

#ifndef FOURVECTOR_H
#define FOURVECTOR_H

class FourVector{
protected:
	double t;	//the time component (x0)
	double x;	//the x component of the vector
	double y; 	//the y component
	double z;	//the z component 

public:
	FourVector(double, double, double, double);	//This creates a four-vector given components
	//components are given as 
	//t x y z 
	//Default values are zeros

	FourVector(ThreeVector,double);
	//This creates a 4-vector from a given three vector and a time component 

	double operator *(const FourVector&);	//The Lorentz invaraint contraction of two fourvectors
	
	FourVector operator +(const FourVector&);	//This adds two fourvectors component-wise
	friend FourVector operator*(const double,const FourVector&);	//This is for scalar multiplication from the left 
	FourVector operator -(const FourVector& rh);	//This subtracts two fourvectors component wise 

	void Print();	//Prints the vector to cout
};

#endif

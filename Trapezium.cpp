#include "Trapezium.h"

Trapezium::Trapezium()
{
	A = 0; B = 0; H = 0;
}

Trapezium::Trapezium(int A, int B, int C, int D, int H)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->H = H;
}

double Trapezium::square()
{
	return (A + B) * H / 2;
}

double Trapezium::perimeter()
{
	return A + B + C + D;
}
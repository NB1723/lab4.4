#include "Rectangle.h"

Rectangle::Rectangle()
{
	A = 0;
	B = 0;
}

Rectangle::Rectangle(int A, int B)
{
	this->A = A;
	this->B = B;
}
double Rectangle::square()
{
	return A * B;
}

double Rectangle::perimeter()
{
	return A + A + B + B;
}
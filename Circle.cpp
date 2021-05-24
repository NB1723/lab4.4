#include <cmath>
#include "Circle.h"

Circle::Circle()
{
	R = 0;
}

Circle::Circle(int R)
{
	this->R = R;
}

double Circle::square()
{
	return 3.14 * R * R;
}

double Circle::perimeter()
{
	return 2 * 3.14 * R;
}
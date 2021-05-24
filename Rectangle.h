#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
private:
	int A;
	int B;
public:
	Rectangle();
	Rectangle(int, int);
	virtual double square();
	virtual double perimeter();
};
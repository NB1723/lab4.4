#include "Figure.h"
class Trapezium : public Figure
{
private:
	int A;
	int B;
	int C;
	int D;
	int H;
public:
	Trapezium();
	Trapezium(int, int, int, int, int);
	virtual double square();
	virtual double perimeter();
};
#include "Figure.h"
class Circle : public Figure
{
private:
	int R;
public:
	Circle();
	Circle(int);
	virtual double square();
	virtual double perimeter();
};
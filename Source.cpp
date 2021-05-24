#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"
using namespace std;
int main()
{
	Rectangle A(5, 6);
	Circle B(6);
	Trapezium C(10, 20, 5, 6, 8);
	cout << "Rectangle:" << endl;
	cout << "Square = " << A.square() << endl;
	cout << "Perimeter = " << A.perimeter() << endl;
	cout << "Circle:" << endl;
	cout << "Square = " << B.square() << endl;
	cout << "Perimeter = " << B.perimeter() << endl;
	cout << "Trapezium:" << endl;
	cout << "Square = " << C.square() << endl;
	cout << "Perimeter = " << C.perimeter() << endl;
}
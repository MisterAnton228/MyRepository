#include "Square.h"

Square::Square(double side):side(side) {}

double Square::sizeIncrease(double percent)
{
	double per = (side * percent) / 100;
	double newSide = side + per;
	return newSide;
}

double Square::sizeReduction(double percent)
{
	double per = (side * percent) / 100;
	double newSide = side - per;
	return newSide;
}

double Square::perimeter()
{
	double perimeter = 4 * side;
	return perimeter;
}

double Square::square()
{
	double square = side * side;
	return square;
}

double Square::diagonal()
{
	double d = side * sqrt(2);
	return d;
}
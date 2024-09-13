#pragma once
#include <iostream>

class Square
{
	double side; //Свойство
public:

	//Конструктор класса
	Square(double side);

	//Увеличение размера стороны на процент
	double sizeIncrease(double percent);

	//Уменьшение размера стороны на процент
	double sizeReduction(double percent);

	//Периметр квадрата
	double perimeter();

	//Площадь квадрата
	double square();

	//Диагональ квадрата
	double diagonal();
};
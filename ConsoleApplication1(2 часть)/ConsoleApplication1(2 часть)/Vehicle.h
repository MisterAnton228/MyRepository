#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	//Свойства класса
protected:
	string name;
	int price;
	string purpose;

	//Конструктор класса
public:
	Vehicle(string name, int price, string purpose);

	//Методы класса
	void Available();

	void Unavailable();

	void Out() const;
};
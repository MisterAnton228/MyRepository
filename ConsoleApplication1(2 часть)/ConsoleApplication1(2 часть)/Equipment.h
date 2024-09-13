#pragma once
#include <iostream>
#include <string>

using namespace std;

class Equipment
{
	//Свойства класса
protected:
	string name;
	int price;
	string purpose;

	//Конструктор класса
public:
	Equipment(string name, int price, string purpose);

	//Методы класса
	void Repair();

	void Plough();

	void Out() const;
};
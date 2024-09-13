#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plant
{
	//Свойства класса
protected:
	string name;
	string type;
	int age;

	//Конструктор класса
public:
	Plant(string name, string type, int age);

	//Методы класса
	void Fruit();

	void Vegetable();

	void Out() const;
};
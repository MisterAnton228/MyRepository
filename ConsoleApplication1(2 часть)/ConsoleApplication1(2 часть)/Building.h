#pragma once
#include <iostream>
#include <string>

using namespace std;

class Building
{
	//Свойства класса
private:
	string name;
	int square;
	string purpose;

	//Конструктор класса
public:
	Building(string name, int square, string purpose);
	
	//Методы класса
	void Construct();

	void NotConstruct();

	void Out() const;
};


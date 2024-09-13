#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
	//Свойства класса
private:
	string name;
	int age;
	int weight;

	//Конструктор класса
public:
	Animal(string name, int age, int weight);


	//Методы класса
	void Eat() const;

	void Sleep() const;

	void Out() const;
};
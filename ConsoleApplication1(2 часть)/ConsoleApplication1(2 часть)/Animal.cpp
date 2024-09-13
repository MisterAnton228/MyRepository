#include "Animal.h"

Animal::Animal(string name, int age, int weight) : name(name), age(age), weight(weight) {}

void Animal::Eat() const
{
	cout << "\n" << name << " ест";
}

void Animal::Sleep() const
{
	cout << "\n" << name << " спит";
}

void Animal::Out() const
{
	cout << "\n\nЖивотное: " << name;
	cout << "\nВозраст: " << age;
	cout << "\nВес: " << weight;
}
#include "Plant.h"

Plant::Plant(string name, string type, int age) : name(name), type(type), age(age) {}

void Plant::Fruit()
{
	cout << "\n" << name << " - фрукт";
}

void Plant::Vegetable()
{
	cout << "\n" << name << " - овощ";
}

void Plant::Out() const
{
	cout << "\n\nРастение: " << name;
	cout << "\nТип питания: " << type;
	cout << "\nСрок созревания (в днях): " << age;
}
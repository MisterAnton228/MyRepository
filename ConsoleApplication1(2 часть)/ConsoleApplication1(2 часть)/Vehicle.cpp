#include "Vehicle.h"

Vehicle::Vehicle(string name, int price, string purpose) : name(name), price(price), purpose(purpose) {}

void Vehicle::Available()
{
	cout << "\n" << name << ": есть в наличии";
}

void Vehicle::Unavailable()
{
	cout << "\n" << name << ": нет в наличии";
}

void Vehicle::Out() const
{
	cout << "\n\nНазвание: " << name;
	cout << "\nЦена: " << price;
	cout << "\nПредназначение: " << purpose;
}
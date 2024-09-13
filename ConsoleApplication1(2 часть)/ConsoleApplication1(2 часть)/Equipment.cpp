#include "Equipment.h"

Equipment::Equipment(string name, int price, string purpose) : name(name), price(price), purpose(purpose) {}

void Equipment::Repair()
{
	cout << "\n" << name << " для ремонта";
}

void Equipment::Plough()
{
	cout << "\n" << name << " для вспашки или посева";
}

void Equipment::Out() const
{
	cout << "\n\nНазвание: " << name;
	cout << "\nЦена: " << price;
	cout << "\nПредназначение: " << purpose;
}
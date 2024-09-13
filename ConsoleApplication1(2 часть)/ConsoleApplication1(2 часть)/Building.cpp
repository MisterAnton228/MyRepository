#include "Building.h"

Building::Building(string name, int square, string purpose) : name(name), square(square), purpose(purpose) {}

void Building::Construct()
{
	cout << "\n" << name << ": построено";
}

void Building::NotConstruct()
{
	cout << "\n" << name << ": в процессе строительства";
}

void Building::Out() const
{
	cout << "\n\nНазвание: " << name;
	cout << "\nПлощадь: " << square;
	cout << "\nПредназначение: " << purpose;
}
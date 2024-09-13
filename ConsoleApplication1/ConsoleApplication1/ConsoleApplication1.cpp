#include <iostream>
#include <vector>
#include <cmath>
#include "Square.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	vector<Square> squares; //Динамический массив квадратов

	double side, percent, count; //Сторона квадрата, процент, количество квадратов
	double index = 0; //Индекс элемента в массиве

	cout << "Введите количество квадратов (> 0): ";
	//Вывод ошибки
	while (!(cin >> count) || count <= 0)
	{
		cout << "Ошибка" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Отбравсывает неправильно введенное значение
	}

	//Цикл для заполнения массива
	for (int i = 0; i < count; ++i)
	{
		cout << "Введите длину стороны " << i + 1 << " квадрата" << ": ";
		//Вывод ошибки
		while (!(cin >> side) || side <=0)
		{
			cout << "Ошибка" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		}
		squares.emplace_back(Square(side));
	}

	while (true)
	{
		cout << "\n\nВыберете квадрат в массиве (1 - " << count << "): ";
		//Вывод ошибки
		while (!(cin >> index) || index <= 0 || index > count)
		{
			cout << "Ошибка" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		//Выбор операции пользователем
		int operation;
		cout << "\nВыберете операцию:\n1 - увеличение размера на процент\n2 - уменьшение размера на процент\n3 - вычисление периметра\n4 - вычисление площади\n5 - вычисление диагонали\n";
		cin >> operation;

		index--;
		//Выбор операции с помощью оператора switch
		switch (operation)
		{
			if (index >= 0 && index < count)
			{
		case 1:
			cout << "Укажите процент, на который нужно увеличить сторону: ";
			cin >> percent;
			cout << "Результат: " << round(squares[index].sizeIncrease(percent) * 100) / 100;
			break;
		case 2:
			cout << "Укажите процент, на который нужно уменьшить сторону: ";
			cin >> percent;
			cout << "Результат: " << round(squares[index].sizeReduction(percent) * 100) / 100;
			break;
		case 3:
			cout << "Периметр = " << squares[index].perimeter();
			break;
		case 4:
			cout << "Площадь = " << squares[index].square();
			break;
		case 5:
			cout << "Диагональ = " << round(squares[index].diagonal() * 100) / 100;
			break;
		default:
			cout << "Такой операции нет!"; //Вывод ошибки
			break;
			}
		}
	}
}
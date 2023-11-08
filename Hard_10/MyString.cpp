#include <iostream>
#include "MyString.h"

//------------------------- КОНСТРУКТОР ПО УМОЛЧАНИЮ (3 строки, 10 символов)

MyString::MyString() : num_row(3), long_string(10)
{
	mass = new char* [num_row];
	for (int i = 0; i < num_row; i++)
	{
		mass[i] = new char[long_string];
	}
}


//------------------------- КОНСТРУКТОР С ПАРАМЕТРАМИ

MyString::MyString(int num_r, int long_s) : num_row(num_r), long_string(long_s)
{
	mass = new char* [num_row];
	for (int i = 0; i < num_row; i++)
	{
		mass[i] = new char[long_string];
	}

	for (int i = 0; i < num_row; i++)
	{
		for (int j = 0; j < long_string; j++)
		{
			mass[i][j] = '\0';
		}
	}
}

//------------------------- КОНСТРУКТОР КОПИРОВАНИЯ

MyString::MyString(MyString& other)
{
	this->num_row = other.num_row;
	this->long_string = other.long_string;

	mass = new char* [num_row];
	for (int i = 0; i < num_row; i++)
	{
		mass[i] = new char[long_string];
	}

	for (int i = 0; i < num_row; i++)
	{
		for (int j = 0; j < long_string; j++)
		{
			this->mass[i][j] = other.mass[i][j];
		}
	}

}

//------------------------- ДЕСТРУКТОР

MyString::~MyString()
{
	for (int i = 0; i < num_row; i++)
	{
		delete[] mass[i];
	}
	delete[] mass;
}

//------------------------- ЗАДАНИЕ СТРОКИ (с определенным номером)

void MyString::Add_str(int num_r)
{
	if (num_r <= num_row && num_r >= 0)
	{
		cout << endl << "введите строку не более " << long_string << " символов." << endl;
		cin >> mass[num_r];
	}
}

//------------------------- ВЫВОД ЗАДАННОЙ СТРОКИ

void MyString::Output_str(int num_r)
{
	if (num_r <= num_row && num_r >= 0)
	{
		cout << endl << "строка с номером " << num_r << " выгядит так:" << endl;
		cout << mass[num_r];
		cout << endl;
	}
}

//------------------------- ВЫВОД ВСЕХ СТРОК

void MyString::Output_text()
{
	cout << endl << "все строки выглядят так:" << endl;
	for (int i = 0; i < num_row; i++)
	{
	cout << "Строка " << i << ":  " << mass[i];
	cout << endl;
	}
	cout << endl;
}

//------------------------- КОНКОТЕНАЦИЯ ДВУХ СТРОК

void MyString::Comb_str(int num_a, int num_b)
{
	cout << "конкотенация строки " << num_a << " и строки " << num_b << " имеет вид:" << endl;
	char* temp_mass = new char[long_string * 2 + 1];
	int temp_i = 0;
	for (int i = 0; i < long_string; i++)
	{
		if (mass[num_a][i] != '\0')
		{
			temp_mass[i] = mass[num_a][i];
			temp_i = i;
		}
		else
		{
			break;
		}

	}
	for (int i = 0; i < long_string; i++)
	{
		if (mass[num_b][i] != '\0')
		{
			temp_mass[temp_i + 1] = mass[num_b][i];
			temp_i++;
		}
		else
		{
			break;
		}
	}
	temp_mass[temp_i + 1] = '\0';
	cout << temp_mass << endl;
	delete[] temp_mass;
}

//------------------------- ПОИСК СТРОКИ

int MyString::Serch_Str()
{
	char* temp_mass = new char[long_string];
	for (int i = 0; i < long_string; i++)
	{
		temp_mass[i] = '\0';
	}
	cout << endl << "Введите строку для поиска: " << endl;
	cin >> temp_mass;
	cout << endl << temp_mass << endl;

	for (int i = 0; i < num_row; i++)
	{
		if (strcmp(mass[i], temp_mass) == 0)
		{
			return i;
		}
	}
	return -1;
}
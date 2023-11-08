#include <iostream>
#include "MyString.h"

//------------------------- ����������� �� ��������� (3 ������, 10 ��������)

MyString::MyString() : num_row(3), long_string(10)
{
	mass = new char* [num_row];
	for (int i = 0; i < num_row; i++)
	{
		mass[i] = new char[long_string];
	}
}


//------------------------- ����������� � �����������

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

//------------------------- ����������� �����������

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

//------------------------- ����������

MyString::~MyString()
{
	for (int i = 0; i < num_row; i++)
	{
		delete[] mass[i];
	}
	delete[] mass;
}

//------------------------- ������� ������ (� ������������ �������)

void MyString::Add_str(int num_r)
{
	if (num_r <= num_row && num_r >= 0)
	{
		cout << endl << "������� ������ �� ����� " << long_string << " ��������." << endl;
		cin >> mass[num_r];
	}
}

//------------------------- ����� �������� ������

void MyString::Output_str(int num_r)
{
	if (num_r <= num_row && num_r >= 0)
	{
		cout << endl << "������ � ������� " << num_r << " ������� ���:" << endl;
		cout << mass[num_r];
		cout << endl;
	}
}

//------------------------- ����� ���� �����

void MyString::Output_text()
{
	cout << endl << "��� ������ �������� ���:" << endl;
	for (int i = 0; i < num_row; i++)
	{
	cout << "������ " << i << ":  " << mass[i];
	cout << endl;
	}
	cout << endl;
}

//------------------------- ������������ ���� �����

void MyString::Comb_str(int num_a, int num_b)
{
	cout << "������������ ������ " << num_a << " � ������ " << num_b << " ����� ���:" << endl;
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

//------------------------- ����� ������

int MyString::Serch_Str()
{
	char* temp_mass = new char[long_string];
	for (int i = 0; i < long_string; i++)
	{
		temp_mass[i] = '\0';
	}
	cout << endl << "������� ������ ��� ������: " << endl;
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
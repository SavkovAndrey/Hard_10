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
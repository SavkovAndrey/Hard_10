#pragma once
#include <iostream>

using namespace std;

class MyString
{
private:

    int	num_row = 0;                          // Число строк
    int long_string = 0;                      // длинна строк
    char** mass;                              // двумерным динамический массив для хранения строк

public:

    MyString(int num_r, int long_s);          // конструктор с параметрами
    MyString();                               // конструктор по умолчанию
    MyString(MyString& other);                // конструктор копирования
    ~MyString();                              // деструктор

};

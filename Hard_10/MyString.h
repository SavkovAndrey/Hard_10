#pragma once
#include <iostream>

using namespace std;

class MyString
{
private:

    int	num_row = 0;                          // ����� �����
    int long_string = 0;                      // ������ �����
    char** mass;                              // ��������� ������������ ������ ��� �������� �����

public:

    MyString(int num_r, int long_s);          // ����������� � �����������
    MyString();                               // ����������� �� ���������
    MyString(MyString& other);                // ����������� �����������
    ~MyString();                              // ����������

};

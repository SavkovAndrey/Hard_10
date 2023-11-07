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

    void Add_str(int num_r);                  // ������� ������ (� ������������ �������)
    void Output_str(int num_r);               // ����� ������ �� �����
    void Output_text();                       // ����� ���� ����� �� �����
    void Comb_str(int num_a, int num_b);      // ������������ ���� �����
    int Serch_Str();                          // ����� ��������� ������
};

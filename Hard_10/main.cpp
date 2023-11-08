#include <iomanip>
#include <iostream>
#include "MyString.h"

using namespace std;

//------------------------- �������

/*
����������� �����, ������� ���������, ��������� ����, �������� � ������� �����,
������ ������  ����� ������������� �����. ����� ������ ��������� ��������� ������:

-����������� ������, ����� ��� ��������� : ���������� ����� � ������������ ����� �����;
-�������� ������� ������, � �������� �������;
-�����, ������� ��������� ����� �������� ������ ��� ���� ����� �� �����;
-����� ������������(�����������) ���� �����;
-�����, ������� ���������� ������� � ������ ����� �������� ������.
���� ����� ������ ���������� ����� ���� ������ � ������(��� - 1 ���� ��� �� �������).
*/

//------------------------- ��������� �������

void menu();

//-------------------------
int main() {
	setlocale(LC_ALL, "RU");

	int n_str, l_str;         // ����������, ����������� ��� ������������ ��������� ����

	cout << "������, ������� ����� � ������� ����� � ����� ����� ����������� �� ����� ��������." << endl;
	cout << "����� �����: ";
	cin >> n_str;
	cout << "����� �������� � ������: ";
	cin >> l_str;

    MyString str(n_str, l_str);

	while (true)
	{
		menu();
		int x;
		cin >> x;
		switch (x)
		{
			//------------------------- ���� ������ �� ������
		case 1:
		{
			int num;
			cout << "������� ����� ������, ������� �� �� ������ ���������: " << endl;
			cin >> num;
			str.Add_str(num);
		}
			break;
			//------------------------- ����� ������ �� ������
		case 2:
		{
			int num;
			cout << "������� ����� ������, ������� �� �� ������ ������� �� �����: " << endl;
			cin >> num;
			str.Output_str(num);
		}
		break;
		    //------------------------- ����� ���� �����
		case 3:
		{
			str.Output_text();
		}
		break;
		    //------------------------- ������������ ���� �����
		case 4:
		{
			int num1, num2;
			cout << "������� ������ ���� �����, ������� ���������� �������." << endl;
			cout << "������ ������: ";
			cin >> num1;
			cout << "������ ������: ";
			cin >> num2;
			str.Comb_str(num1, num2);
		}
		break;
		    //------------------------- ����� ���� �����
		case 5:
		{
			cout << "������� ������: " << str.Serch_Str() << endl;
		}
		break;
		    //------------------------- ����� �� ���������
		case 0:
		{
			cout << endl << "�� ����� �� ���������!" << endl;
			system("pause");
			return 0;
		}
		break;
		    //-------------------------
		}

	}






	system("pause");
	return 0;
}

//------------------------- �������

void menu()
{
	cout << endl;
	cout << endl << "��������� ��������:" << endl;;
	cout << endl << "1 - ������ ������ � ������������ �������";
	cout << endl << "2 - ������� ������ � �������� �������";
	cout << endl << "3 - ������� ��� ������";
	cout << endl << "4 - ��������� ������������ ���� ����� � ������� ���������";
	cout << endl << "5 - �������� ����� ������ � ������ ����� (����� ������ ��� -1, ���� ��� ������)";
	cout << endl << "0 - ����� �� ���������";
	cout << endl;
	cout << endl << "�������� ��������:";
}


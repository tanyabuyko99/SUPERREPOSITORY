// Zodiac.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int b;
	cout << "������� ���� ���� �������" << endl;
	cout << "1 - ����" << endl;
	cout << "2 - �����" << endl;
	cout << "3 - ��������" << endl;
	cout << "4 - ���" << endl;
	cout << "5 - ���" << endl;
	cout << "6 - ����" << endl;
	cout << "7 - ����" << endl;
	cout << "8 - ��������" << endl;
	cout << "9 - �������" << endl;
	cout << "10 - �������" << endl;
	cin >> a;

	cout << "������� ������ ���� �������" << endl;
	cout << "1 - ����" << endl;
	cout << "2 - �����" << endl;
	cout << "3 - ��������" << endl;
	cout << "4 - ���" << endl;
	cout << "5 - ���" << endl;
	cout << "6 - ����" << endl;
	cout << "7 - ����" << endl;
	cout << "8 - ��������" << endl;
	cout << "9 - �������" << endl;
	cout << "10 - �������" << endl;
	cin >> b;



	if (a == 1 && b == 1)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 1)
	{
		cout << "85 %" ;
	}
	else if (a == 3 && b == 1)
	{
		cout << "51 %" ;
	}
	else if (a == 4 && b == 1)
	{
		cout << "48 %" ;
	}
	else if (a == 5 && b == 1)
	{
		cout << "49 %" ;
	}
	else if (a == 6 && b == 1)
	{
		cout << "39 %" ;
	}
	else if (a == 7 && b == 1)
	{
		cout << "58 %" ;
	}
	else if (a == 8 && b == 1)
	{
		cout << "53 %" ;
	}
	else if (a == 9 && b == 1)
	{
		cout << "61 %" ;
	}
	else if (a == 10 && b == 1)
	{
		cout << "58 %" ;
	}
	else if (a == 2 && b == 2)
	{
		cout << "72 %" ;
	}
	else if (a == 2 && b == 3)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 4)
	{
		cout << "78 %" ;
	}
	else if (a == 2 && b == 5)
	{
		cout << "34 %" ;
	}
	else if (a == 2 && b == 5)
	{
		cout << "45 %" ;
	}
	else if (a == 2 && b == 6)
	{
		cout << "35 %" ;
	}
	else if (a == 2 && b == 7)
	{
		cout << "81 %" ;
	}
	else if (a == 2 && b == 8)
	{
		cout << "22 %" ;
	}
	system("pause");
	return 0;
}


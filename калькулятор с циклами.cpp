// ConsoleApplication21.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	int s;
	int m = 5;
	int o;
	while (m > 0) {
		cout << "������� 1-�� �����: " << endl;
		cin >> a;

		cout << "������� 2-�� �����: " << endl;
		cin >> b;

		cout << "�������� �������� 1 - ��������, 2 - ���������, 3 - ���������, 4 - �������: " << endl;
		cin >> s;

		if (s == 1) {
			cout << "a + b = " << a + b << endl << endl;
		}
		if (s == 2) {
			cout << "a - b = " << a - b << endl << endl;
		}
		if (s == 3) {
			cout << "a * b = " << a * b << endl << endl;
		}
		if (s == 4) {
			cout << "a / b = " << a / b << endl << endl;
		}

		cout << "������� 9 ��� �����������, 0 - ��� ������" << endl << endl;
		cin >> o;

		if (o == 0) {
			m = 0;
		}
		else if (o == 9) {
			m = 5;
		}
	}
	return 0;
}

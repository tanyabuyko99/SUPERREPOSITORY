// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;

	cout << "enter a" << endl;
	cin >> a;

	cout << "enter b: " << endl;
	cin >> b;

	cout << "enter the answer a and b: " << endl;
	cin >> c;

	if (c == a * b) {
		cout << "you're right!" << endl;
	}
	else {
		cout << "you're wrong:(" << endl;
	}
	system("pause");
	return 0;
}

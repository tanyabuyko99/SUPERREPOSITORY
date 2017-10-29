// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter the 1st's cat weight: ";
	cin >> x;
	cout << "Enter the 2d's cat weight: ";
	cin >> y;

	if (x > 5) {
		cout << "Your 1st cat is too fat!!!" << endl;
	}
	else if (y>5) {
		cout << "Your 2d cat is too fat!!!" << endl;
	}
	else if ((x > 5) && (y > 5)) {
		cout << "They are fat!" << endl;
	}
	else {
		cout << "it's all ok with them!" << endl;
	}
	system("pause");
	return 0;
}
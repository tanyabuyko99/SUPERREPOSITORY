// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "If a goose is ok press 0, othewise press 1" << endl;
	cin >> x;

	if (x == 0) {
		cout << "he is ok!" << endl;
	}
	else if (x == 1) {
		cout << "he is not ok, something disappointed him:(!" << endl;
	}
	else {
		cout << "give him a hug " << endl;
	}
	system("pause");
	return 0;
}

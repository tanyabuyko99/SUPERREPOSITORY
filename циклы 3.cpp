// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int i;

	for (i = 1; i <= 9; i++) {
		cout << x << " * " << i << " = " << x * i << endl;
	}
	system("pause");
	return 0;
}

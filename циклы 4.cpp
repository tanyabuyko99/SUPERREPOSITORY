// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int x = 9;
	int i;

	for (i = 1; i <= 9; i++) {
		cout << x << " * " << i << " = " << x * i << endl;
	}
	system("pause");
	return 0;
}


// cpa_lab_1_7_3_(1)-A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


using namespace std;


int main(void) {
	float a,b;
	a = 2.3;
	b = 2.123456;
	int value;
	cout << a << endl;
	cout << a <<"0"<< endl;
	cout << b << endl;
	cout.precision(3);
	cout << b << endl;
	cout.precision(1);
	cout << b << endl;
	system("pause");
	return 0;
}

// cpa_lab_2_1_5_(5)-B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int year, a, b, c, d, e;
	do
	{
		cout << "Enter year from 1900 to 2099" << endl;
		cin >> year;
	} while (year < 1900 || year > 2099);

	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (a * 19 + 24) % 30;
	e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if (d + e < 10)
	{
		cout << endl << "March " << d + e + 22 << endl;
	}
	else
	{
		cout << endl << "April " << d + e - 9 << endl;
	}

	system("pause");
	return 0;

}



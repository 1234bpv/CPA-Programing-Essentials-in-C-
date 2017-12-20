// cpa_lab_2_3_19_(1)-B.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int c0, counter = 0;
	do
	{
		cout << "Enter integer > 0" << endl;
		cin >> c0;
	} while (c0 <= 0);
	while (c0!=1)
	{
		if (c0 % 2 == 0)
		{
			c0 = c0 / 2;
		}
		else
		{
			c0 = 3 * c0 + 1;
		}
		cout << c0 << endl;
		counter++;
	}
	cout << endl << "Steps = " << counter<< endl;
	


	system("pause");
	return 0;

}

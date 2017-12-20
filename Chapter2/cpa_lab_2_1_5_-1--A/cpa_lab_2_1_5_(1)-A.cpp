// cpa_lab_2_1_5_(1)-A.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if(year%4 != 0)
		cout << "Common year";
	else
		if (year % 100 != 0)
			cout << "Leap year";
		else
			if (year % 400 != 0)
				cout << "Common year";
			else
				cout << "Leap year";
		

	// Insert your code here
	system("pause");
	return 0;

}


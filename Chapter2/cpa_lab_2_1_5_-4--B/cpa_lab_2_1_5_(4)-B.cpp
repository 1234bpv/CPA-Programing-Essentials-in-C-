// cpa_lab_2_1_5_(4)-B.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int year, month, day;
	do 
	{
		cout << "Enter year from 1900 to 2099" << endl;
		cin >> year;
	} while (year < 1900 || year > 2099);
	do
	{
		cout << "Enter month" << endl;
		cin >> month;
	}
	while (month < 1 || month > 12);
	do{
	cout << "Enter day" << endl;
	cin >> day;
	}
	while (month < 1 || month > 31);

	month-=2;
	if (month <= 0)
	{
		month += 12;
		year--;
	}
	month = month * 83 / 32;
	month += day;
	month += year;
	month += year / 4;
	month -= year / 100;
	month += year / 400;
	int result = month % 7;
	cout << endl << result  << endl;

	system("pause");	
	return 0;

}


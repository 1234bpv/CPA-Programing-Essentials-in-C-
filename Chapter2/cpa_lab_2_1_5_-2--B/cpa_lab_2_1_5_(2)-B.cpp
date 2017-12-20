// cpa_lab_2_1_5_(2)-B.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	if (grossprice <= 0 || taxrate <= 0 || taxrate >= 100)
	{
		cout << "Unapropriate values found" << endl;
	}
	else
	{
		netprice = grossprice / (1 + taxrate / 100);
		taxvalue = grossprice - netprice;
		// Insert you code here
		cout << "Net price: " << netprice << endl;
		cout << "Tax value: " << taxvalue << endl;
	}
	system("pause");
	return 0;

}

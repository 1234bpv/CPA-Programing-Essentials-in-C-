// cpa_lab_1_7_5_(3)-A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main(void) {
	bool answer;
	int value1;
	cout << "Enter a value 1: ";
	cin >> value1;
	int value2;
	cout << "Enter a value 2: ";
	cin >> value2;
	int value3;
	cout << "Enter a value 3: ";
	cin >> value3;
	int value4;
	cout << "Enter a value 4: ";
	cin >> value4;
	if( value1 >=1 && value1 <=255 && value2 >= 1 && value2 <= 255 && value3 >= 1 && value3 <= 255 && value4 >= 1 && value4 <= 255) 
	{
		cout << value1 << "." << value2 << "." << value3 << "." << value4;
	}
	else
	{
		cout << "WRONG IP"<<endl;
	}
	system("pause");
	return 0;
}

// cpa_lab_1_7_4_(2)-A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"

#include <iostream>
using namespace std;
int main(void) {
	bool answer;
	float value1;
	cout << "Enter a value 1: ";
	cin >> value1;
	float value2;
	cout << "Enter a value 2: ";
	cin >> value2;
	answer = value1 == value2; 
	cout << (answer ? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon)") << endl;
	system("pause");
	return 0;
}

// cpa_lab_1_6_11_(1)-A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main(void) {
	bool answer;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	answer = value >= 0 && value < 10 || value * 2 < 20 && value - 2 > -2 || value - 1 > 1 && value / 2 < 10 || value == 111; // insert your expression here
		cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
		system("pause");
	return 0;
}

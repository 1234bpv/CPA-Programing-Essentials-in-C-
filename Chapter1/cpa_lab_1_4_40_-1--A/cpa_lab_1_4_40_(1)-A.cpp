// cpa_lab_1_4_40_(1)-A.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)

{
	float pi = 3.14159265359;
	float x,y;
	cout << "Enter value for x: "; 
	cin >> x;
	y = (pow(x, 2) / (pow(pi, 2)*(pow(x, 2) + 0.5)))*(1 + (pow(x, 2) / (pow(pi, 2)*pow(pow(x, 2) - 0.5, 2))));
	// put your code here 
	cout << "y = " << y; 
	system("pause");
	return 0; 
} 

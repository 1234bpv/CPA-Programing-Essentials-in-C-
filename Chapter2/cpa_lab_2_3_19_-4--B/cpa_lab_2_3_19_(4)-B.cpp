// cpa_lab_2_3_19_(4)-B.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int k;
	double n = 1;
	cout.precision(20);
	cout << "Pow = ";
	cin >> k;
	// Insert your code here
	for (int i = 0; i < k; i++)
	{
		n = n/2;
	}
	cout << n << endl;

	system("pause");
	return 0;

}

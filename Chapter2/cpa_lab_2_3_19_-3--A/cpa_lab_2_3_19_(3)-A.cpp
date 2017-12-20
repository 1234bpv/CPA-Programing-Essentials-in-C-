// cpa_lab_2_3_19_(3)-A.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int k;
	unsigned long long int n = 1;
	cout << "Pow = ";
	cin >> k;
	// Insert your code here
	for (int i = 0; i < k; i++)
	{
		n = n*2;
	}
	cout << n << endl;

	system("pause");
	return 0;

}


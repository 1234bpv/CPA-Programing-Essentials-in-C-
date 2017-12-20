#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	double pi4 = 0.;
	long n;
	cout << "Number of iterations? ";
	cin >> n;
	// Insert your code here
	for (int i = 0; i < n; i++)
	{
		int k = i % 2;
		if (i % 2 == 0)
		{
			pi4 = pi4 + (1 / (1 + i * 2));
		}
		else
		{
			pi4 = pi4 - (1 / (1 + i * 2));
		}
	}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;

	system("pause");
	return 0;

}


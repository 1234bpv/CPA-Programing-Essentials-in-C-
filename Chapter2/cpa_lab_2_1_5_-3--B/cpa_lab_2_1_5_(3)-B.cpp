// cpa_lab_2_1_5_(3)-B.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


int main()
{
	int sys, ft;
	float m, in, ftFloat, rest;
	// Insert your c
	cout << "Chose metric(0) or imperial(1) system" << endl;
	cin >> sys;
	if (sys == 0)
	{
		cout << "Imput length in meters" << endl;
		cin >> m;
		ft = m / 0.3048;
		rest = ft*0.3048;
		in = (m - rest) / 0.0254;
		cout << ft << "'" << in << "'" << endl;
	}
	if (sys == 1)
	{
		cout << "Imput the part of length in foot(integer)" << endl;
		cin >> ft;
		cout << "Imput the rest in inches " << endl;
		cin >> in;
		m = 0.3048*ft + 0.0254*in;
		cout <<m<< "m" << endl;
	}
	system("pause");
	return 0;

}


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
	// Insert your code here
	Date result;
	time_t t = time(NULL);
	tm tl = *localtime(&t);
	result.year = tl.tm_year + 1900;
	result.month = tl.tm_mon + 1;
	result.day = tl.tm_mday;

	return result;
}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;

	system("pause");
	return 0;
}

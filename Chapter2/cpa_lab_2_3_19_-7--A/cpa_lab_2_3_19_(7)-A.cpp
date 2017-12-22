#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(void) {
	int n, a = 0, b = 0, c;
	cout << " Fibonacci sequence"<<endl;
	cout << "Enter number : ";
	cin >> n;
	a = 1;
	b = 1;
	for (int i = 2; i < n; i++) {
		c = a + b;
		b = a;
		a = c;
	}
	cout << endl << c << endl;
	return 0;
}

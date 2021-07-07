#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {
	int a, b, hasil;
	float c;

	a = 10; b = 3; c = 0.5;
	hasil = (int)(pow(a, b) + c);

	cout << "a  = " << a << endl;
	cout << "b  = " << b << endl;
	cout << "c  = " << c << endl << endl;
	cout << "hasil  = " << hasil;

	_getch();
	return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	float a, b, c;
	cout << "Wyobraz sobie rownanie kwadratowa pod postacia: ax^2 + bx + c = . Aby rozwiazac uklad wpisz" <<
	 "(jezeli twoje rownanie nie ma bx lub c, w ich miejscu wpisz 0):  a:" << endl;
		cin >> a;
		cout << " , wpisz b: " << endl;
		cin >> b;
		cout << " , oraz wpisz c: "<< endl;
		cin >> c;
		
	float DELTA = (b*b) - 4*a*c;
	if (DELTA <0) {
		cout << "Delta ujemna, rownanie nie ma rozwiazan." << endl;
	}
	else {
	
	float SQRTDELTA = sqrt(DELTA);
	float x1 = (-b +SQRTDELTA) / (2*a);
	float x2 = (-b - SQRTDELTA) / (2*a);

	cout << "Rozwiazaniami rownan sa: x1 = " << x1 << " oraz x2= " << x2 <<endl;
}
		return 0;
	}

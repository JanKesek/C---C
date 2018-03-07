#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float Suma(float n) {
	float SUMA =0.00000;
	for (int i=0; i<=n;i++) {
		cout << sqrt(i) << endl;
		SUMA = SUMA+ sqrt(i);
	}
	return SUMA;
}

int main() {
	int a;
	cout << "Wpisz liczbe z ktorej masz obliczyc sume ciagu pierwiastkow: 0,1,2,...,n : " << endl;
	cin >> a;
	cout << "Suma ciagu pierwiastkow z: 0,1,2, ... , n z " << a << " wynosi: " <<  Suma(a) << endl;
}

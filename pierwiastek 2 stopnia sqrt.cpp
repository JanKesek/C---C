#include <iostream>
#include <cmath>

using namespace std;
int main () {

	float a;
	cout << "Wpisz liczbe: " <<endl;
	cin >> a;
	float b;
	if (a<0) {
		b=a*-1;
	}
	else b=a;
	cout << "Wartosc bezwzgledna z " << a << " to: " << b << endl;
	


	
	 return 0;
}

#include <iostream>

using namespace std;

int bezwzgledna(int a) {
	int b;
	if (a<0) {
	b=a*(-1);
	cout << "wartosc bezwzgledna z " << a << " to: " << b << endl;
}
else {
	b=a;
	cout << "wartosc bezwzgledna z " << a << " to: " << b << endl;
}

	return b;
}

int main() {
	int n;
	cout << "Wpisz liczbe ktorej wartosc bezwzgledna chcesz poznac: " << endl;
	cin >> n;
	bezwzgledna(n);
	
	
	return 0;
}

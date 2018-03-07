#include <iostream>
using namespace std;

int silnia(int a) {
	long long b=1;
	for (int i=2; i<a+1; i++) {
		b*=i;
	}
	cout << "Silnia " << a << " wynosi: " << b << endl;
	return b;
}

int main () {
	int n;
	do {
		cout << "wpisz nieujemna liczbe calkowita: " << endl;
		cin >> n;
	}
	while (n<0);
	 silnia(n);
	 return 0;
}

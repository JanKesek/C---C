#include <iostream>
using namespace std;

int tablice(int const n) {

	
	int tab[n];
	for (int i=0;i<n;i++) {
		cout << "Wpisz " << i+1 << " element tablicy" << endl;
		cin >> tab[i];
	}
	for (int h=0;h<n;h++) {
		tab[h]=0;
		cout << tab[h] << endl;
	}
	return 1;
}

int main() {
	int a;
	do {
		cout << "Wpisz nieujemna liczbe a " << endl;
		cin >> a;
	}
	while (a<0);
	cout << tablice(a);
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	float n,  m, o;
	cout << "Wpisz liczbe ktorej wielokrotnosc chcesz poznac: " << endl;
	cin >> n;
	cout << "Wpisz liczbe od ktorej szukane wielokrotnosci maja byc mniejsze: " << endl;
	cin >> o;
	cout << "Wpisz liczbe od ktorej szukane wielokrotnosci maja byc wieksze: " << endl;
	cin >> m;
	int ROZN = o/n;
	float tab[ROZN];

	for (int i=0;i<ROZN;i++) {	
			tab[i] = n*i		
	}
 	
 	
 	for (int h =0; h<ROZN;h++) {
 		if (tab[h] < o && tab[h] > m) {
 		cout << tab[h] << endl;
 	}
	 }
	 return 0;
}


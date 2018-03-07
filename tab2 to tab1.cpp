#include <iostream>
using namespace std;

int tablica1 (int a) {
	int tab1[a];
	int tab2[a];

	for (int i=0;i<a;i++) {
		cout << i+1 << " element pierwszej tablicy to: " << endl;
		cin >> tab1[i];
		tab2[i]=tab1[i];
 }
	cout << "Elementy tablicy drugiej to: " << endl;
	for (int h=0;h<a-1;h++) {
	cout << tab2[h] << endl;
}
return tab2[a-1];
}

int main() {
	int n;
	do {
		cout << "wpisz ilosc elementow tablicy: " << endl;
		cin >> n;
	}
	while (n<0);
	cout << "Elementy tablicy drugiej to: " << endl;
	cout << tablica1(n) << endl;
	return 0;
}

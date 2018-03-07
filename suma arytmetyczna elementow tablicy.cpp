#include <iostream>
using namespace std;
int main() {
	int a;
	do {
		cout << "Wpisz ilosc elementow tablicy " << endl;
		cin >> a;
	}
	while (a<0);
	const int tab[] = { 	 [0] = 6, [1] = 4, [2] =2
	};
	/*
	int t=0;
	for (int h=0;h<a;h++) {
		if (tab[h]!=0) {
			t+=1;
		}
	}
		float SUMA=0;
for (int i=0;i<t;i++) {
	SUMA+=tab[t];
}
	cout << "Suma arytmetyczna elementow tablicy to: " << SUMA / t << endl; */
	int SUMA=0;
	int m=0;
	cout << "Elementy tablicy to: " << endl;
	for (int z=0;z<a;z++) {
	
	cout << tab[z] << endl;
	if (tab[z]!=0) {
		SUMA+=tab[z];
		m+=1;
	}
}
cout << "Srednia arytmetyczna to: " << SUMA/m << endl;
	return 0;
}

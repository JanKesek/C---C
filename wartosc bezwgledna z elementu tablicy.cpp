#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Zdecyduj ile elementow ma zawierac tablica: " << endl;
	cin >> n;
	int tab[n];
	for (int i=0;i<n;i++) {
		cout << "Podaj " << i+1 << " element tablicy" << endl;
		cin >> tab[i];
		
	}
	for (int h=0; h<n;h++) {
		if (tab[h] <0) {
			cout << "Wartosc bezwzgledna z " << tab[h] << " to: " << tab[h]*-1 << endl;
		}
		else {
			cout << "Wartosc bezwzgledna z " << tab[h] << " to: " << tab[h] << endl;
		}
	}
	return 0;
}


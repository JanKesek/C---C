#include <iostream>
using namespace std;

int main() {
	int n;
	float SUMA=0;
	cout << "Zdecyduj ile elementow ma zawierac tablica: " << endl;
	cin >> n;
	int tab[n];
	for (int i=0;i<n;i++) {
		cout << "Podaj " << i+1 << " element tablicy" << endl;
		cin >> tab[i];
		
	}
	for (int h=0;h<n;h++) {
			SUMA+=tab[h];
	}
	cout << "Suma arytmetyczna wszystkich elementow w tablicy wynosi: " << SUMA/n << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	float SUMA=1;
	cout << "Zdecyduj ile elementow ma zawierac tablica: " << endl;
	cin >> n;
	unsigned int tab[n];
	for (int i=0;i<n;i++) {
		cout << "Podaj " << i+1 << " element tablicy" << endl;
		cin >> tab[i];
		
	}
	for (int h=0;h<n;h++) {
			SUMA*=tab[h];
	}
	float z =1;
	double w=z/n;
	
	cout << SUMA << "   "<< w << " Srednia geometryczna wszystkich elementow w tablicy wynosi: " << pow(SUMA,w) << endl;
	return 0;
}

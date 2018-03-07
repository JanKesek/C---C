#include <iostream>
#include <cmath>

using namespace std;



int main () {
	cout << "Ile elementow ma zawierac tablica?: " << endl;
	int a;
	cin >> a;
	cout << "Wpisz " << a << " elementow: " << endl;
	double tab[a];
	for (int i=0;i<a;i++) {
		cin >> tab[i];
	
	}
	int z =tab[0];

	for (int j=0;j<a;j++) {
		double* b = &tab[j];
		cout << j+1 << " element " << *b << " o wskazniku " << b << endl;
	}

	return 0;
}

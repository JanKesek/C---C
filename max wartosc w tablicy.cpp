#include <iostream>
using namespace std;

int maxValue (int a) {
		int tab[a];
		cout << "Wpisz " << a << " elementow" << endl;
		for (int h=0;h<a;h++) {
			cin >> tab[h];
		}
		int max=tab[0];
		int indxMax =0;
		for (int i=1;i<a;i++) {
			if (tab[i] > max) {
				max = tab[i];
				indxMax=i;
			}
		}
		cout << "index najwiekszego elementu tablicy to: " << indxMax << endl;
return max;
}


int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	cout << "Najwieksza wartosc tablicy to " << maxValue(n) << endl;
	return 0;
}

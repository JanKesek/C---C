#include <iostream>
using namespace std;

int minValue (int a) {
		int tab[a];
		cout << "Wpisz " << a << " elementow" << endl;
		for (int h=0;h<a;h++) {
			cin >> tab[h];
		}
		int min=tab[0];
		int indxMin =0;
		for (int i=1;i<a;i++) {
			if (tab[i] < min) {
				min = tab[i];
				indxMin=i;
			}
		}
		
return indxMin;
}


int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	cout << "Indeks najmniejszej wartosc tablicy to " << minValue(n) << endl;
	return 0;
}

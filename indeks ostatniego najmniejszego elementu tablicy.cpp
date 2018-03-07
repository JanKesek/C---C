#include <iostream>
using namespace std;

int minValue (int a) {
		int tab[a];
		cout << "Wpisz " << a << " elementow" << endl;
		for (int h=0;h<a;h++) {
			cin >> tab[h];
		}
		int min=tab[0];
		int indxMin[a];
		int l=0;
		for (int i=0;i<a;i++) {
			if (tab[i] <= min) {
				min = tab[i];
				indxMin[l]=i;
				l+=1;
			}
			
		}
		cout << "tablica najmniejszych wartosci to: " << endl;
		for (int z=0;z<l;z++) {
			cout << indxMin[z] << endl;
		}

return indxMin[l-1];
}


int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	cout << "Indeks ostatniej najmniejszej wartosc tablicy to " << minValue(n) << endl;
	return 0;
}

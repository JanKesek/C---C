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
			}
			
		}
	for (int j=0;j<a;j++) {
		if (tab[j]==min) {
			indxMin[l]=j;
			l+=1;
		}
	}

return indxMin[0];
}


int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	cout << "Indeks pierwszej najmniejszej wartosc tablicy to " << minValue(n) << endl;
	return 0;
}

#include <iostream>
using namespace std;

int maxValue (int a) {
		int tab[a];
		cout << "Wpisz " << a << " elementow" << endl;
		for (int h=0;h<a;h++) {
			cin >> tab[h];
			if (tab[h]<0) {
				tab[h]=tab[h]*-1;
			}
	
		}
		int max=tab[0];
		int indxMax =0;
		for (int i=1;i<a;i++) {
			if (tab[i] > max) {
				max = tab[i];
				indxMax=i;
			}
		}
		
return max;
}


int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	cout << "ajwieksza wartosci bezwzgledna elementu tablicy to: " << maxValue(n) << endl;
	return 0;
}

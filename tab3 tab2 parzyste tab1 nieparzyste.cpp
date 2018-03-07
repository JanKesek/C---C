#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "ilosc elementow tablicy: " << endl;
	cin >> n;
	
	int tab1[n];
	int tab2[n];
	int tab3[2*n];

	for (int i=0;i<2;i++) {
		cout << "Wpisz " << n << " elementow dla " << i+1 << " tablicy" << endl;
		for (int j=0;j<n;j++) {
			if (i==0) {
				cin >> tab1[j];
			}
			else if (i==1) {
				cin >> tab2[j];
			}	
	}
}

	
	
	int l=0;
	int m=0;
	for (int o=0;o<2*n;o++) {
		if (o%2==0) {
			tab3[o] = tab2[l];
			l++;
		}
		else {
			tab3[o] = tab1[m];
			m++;
		}
	}
	cout << "Elementy tablicy trzeciej (indeksy parzyste to elementy tablicy 2, nieparzyste tablicy 1) " << endl;
	for (int r=0;r<2*n;r++) {
		cout << r+1 << " element tablicy trzeciej to: " << tab3[r] << endl;
	}
		return 0;
	}
	

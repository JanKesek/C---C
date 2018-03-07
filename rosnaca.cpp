#include <iostream>
using namespace std;

int main () {
		int a;
		cout << "Ile chcesz miec elementow? " << endl;
		cin >> a;
		cout << "Wpisz " << a << " elementow" << endl;
		int tab[a];
		for (int h=0;h<a;h++) {
			cin >> tab[h];
		}

		int max = tab[0];
		int tabrosn[a];
		int l=0;
	while(tab!=0) {
	
		for (int i=0;i<a;i++) {
			if (tab[i] >max) {
			max = tab [i];
			tabrosn[l]=max;
			l++;
			tab[i]=0;
			}
		}
	}
	

		cout << "Uporzadkowane rosnaca: " << endl;
		for (int k=0;k<a;k++) {
			cout << tabrosn[k] << endl;
		}
	return 0;
}

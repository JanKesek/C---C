#include <iostream>
using namespace std;

int main () {
		
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	int tab[n];
	cout << "Wpisz elementy tablicy: " << endl;
	for (int i=0;i<n;i++) {
		cin >> tab[i];
	}
	int w=1;
	const	int zet = tab[0];
	const int y = tab[n-1];
	for (int j=1;j<n-2;j++) {	
		tab[w-1]=tab[j];
		w++;
	}
	tab[n-1]=zet;
	tab[n-2]=y;
	cout << "Elementy tablicy przesuniete o 1 w lewo to: " << endl;
	for (int h=0;h<n;h++) {
		cout << tab[h] << endl;
	}

	return 0;
}

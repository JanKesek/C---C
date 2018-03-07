#include <iostream>
using namespace std;



int main() {
	int m, n;
	cout << "Podaj m " << endl;
	cin >> m;
	cout << "Podaj n " << endl;
	cin >> n;
	const int a =m;
	const int b =n;
	int tab[a][b] ;
	int tab2[a][b];
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy" << endl;
			cin >> tab[i][j];
			tab2[i][j] = tab[i][j];
		}
	}
	cout << "Pierwsza tablica: " << endl;
	for (int o=0;o<a;o++) {
		for (int p=0;p<b;p++) {
			cout << tab[o][p] << " ";

		}
		cout << "" << endl;
	}
	cout << "" << endl;
	cout << "Druga tablica: " << endl;
		for (int k=0;k<a;k++) {
		for (int l=0;l<b;l++) {
			cout << tab2[k][l] << " ";

		}
		cout << "" << endl;
	}
	return 0;
}

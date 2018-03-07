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
	int tabZam1[a][b];
	int tabZam2[a][b];
	int* pointra[a][b]; 
	int* pointrb[a][b]; 
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy" << endl;
			cin >> tab[i][j];
			tabZam1[i][j] = tab[i][j];
		}
	}
	for (int q=0;q<a;q++) {
		for (int r=0;r<b;r++) {
			cout << "Wpisz " << r+1 << " element " << q+1 << " tablicy" << endl;
			cin >> tab2[q][r];
			tabZam2[q][r] = tab2[q][r];
		}
	}
	cout << "Pierwsza tablica: " << endl;
	for (int o=0;o<a;o++) {
		for (int p=0;p<b;p++) {
			
			tab[o][p] = tabZam2[o][p];
			cout << tab[o][p] << " ";

		}
		cout << "" << endl;
	}
	cout << "" << endl;
	cout << "Druga tablica: " << endl;
		for (int k=0;k<a;k++) {
		for (int l=0;l<b;l++) {
			tab2[k][l] = tabZam1[k][l];
			cout << tab2[k][l] << " ";

		}
		cout << "" << endl;
	}
	return 0;
}

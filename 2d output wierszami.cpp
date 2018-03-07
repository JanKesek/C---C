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
	
	for (int i=0;i<a;i++) {
		for (int j=0;j<a;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy" << endl;
			cin >> tab[i][j];
		}
	}
		for (int k=0;k<a;k++) {
		for (int l=0;l<a;l++) {
			cout << tab[k][l] << " ";

		}
		cout << "" << endl;
	}
	return 0;
}

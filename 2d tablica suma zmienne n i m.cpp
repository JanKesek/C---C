#include <iostream>
using namespace std;



int main() {
	const int m, n;
	cout << "Podaj m " << endl;
	cin >> m;
	cout << "Podaj n " << endl;
	cin >> n;
	int n[m][n] ;
	
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy: " ;
			cin >> n[i][j];
		}
	}
	int Suma=0;
	for (int k=0;k<m;k++) {
		for (int l=0;l<n;l++) {
	Suma+=n[k][l];
}
 
}
	return Suma;
}


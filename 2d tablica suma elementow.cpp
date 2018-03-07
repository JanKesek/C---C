#include <iostream>
using namespace std;



int main() {
	int m;
	cout << "Podaj m " << endl;
	cin >> m;
	int n[m][100] ;
	
	for (int i=0;i<m;i++) {
		for (int j=0;j<100;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy: " ;
			cin >> n[i][j];
		}
	}
	int Suma=0;
	for (int k=0;k<m;k++) {
		for (int l=0;l<100;l++) {
	Suma+=n[k][l];
}
 
}
	return Suma;
}


#include <iostream>
using namespace std;



int main() {
	int a, b;
	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	const int x = a;
	const int y = b;
	 int n[x][y] ;
	
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cout << "Wpisz " << j+1 << " element " << i+1 << " tablicy: " ;
			cin >> n[i][j];
		}
	}
	int Srednia=0;
	int p=0;
	
		for (int l=0;l<b;l++) {
	Srednia+=n[0][l];
	p++;
}
 	int max = Srednia / p;
 	int index;
 	
 	for (int r=0;r<a;r++) { 
 	p=0;
 	Srednia=0;
 	for (int q=0;q<b;q++) {
	Srednia+=n[r][q];
	p++;
}
if (Srednia/p > max) {
	max = Srednia/p;
	index=r;
}
}
 	

	cout << "Maksymalna srednia arytmetyczna sposrod srednich wartosci tablic tablic wynosi " << max << " a jej index to " << index << " czyli tablica z najwieksza srednia arytmetyczna to " << index+1 << endl;
	return 0;
}


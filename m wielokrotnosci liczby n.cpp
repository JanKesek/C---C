#include <iostream>
using namespace std;

int main() {
	int n,  m;
	cout << "Podaj dwie liczby. Pierwsza: liczba ktorej wielokrotnosci chcesz uzyskasz. Druga: okresla liczbe wielokrotnosci." << endl;
	cin >> n;
	cin >> m;
	float tab[m];
	for (int i=0; i<=m;i++) {
		tab[i] = (i+1) *n;
 	}
 	for (int h =0; h<m;h++) {
 		cout << tab[h] << endl;
	 }
	 return 0;
}


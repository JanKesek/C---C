#include <iostream>
using namespace std;



int main() {
	int m;
	cout << "Podaj m " << endl;
	cin >> m;
	int n[m][100] ;
	
	for (int i=0;i<m;i++) {
		for (int j=0;j<100;j++) {
			n[i][j] = 0;
		}
	}
	for (int k=0;k<m;k++) {
		cout << k+1 << " tablica to: " << endl; 
		for (int l=0;l<100;l++) {
	cout << n[k][l] << endl;
}
 
}
	return 0;
}


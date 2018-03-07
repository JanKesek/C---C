#include <iostream>
using namespace std;



int main() {


	int n[100][100][100];
	
	for (int i=0;i<100;i++) {
		for (int j=0;j<100;j++) {
			for (int k=0;k<100;k++) {
			
			cout << "Oto " << k+1 << " element " << j+1 << " tablicy tablic " << i+1 << " tablicy: " << endl ;
			n[i][j][k] = k;
			cout << n[i][j][k] << endl;
		}
		}
	}
	int Suma=0;
	for (int l=0;l<100;l++) {
		for (int m=0;m<100;m++) 
		{
			for (int o=0;o<100;o++) {
				Suma+=n[l][m][o];
		}
}
 
}
cout << Suma << endl;
	return 0;
}


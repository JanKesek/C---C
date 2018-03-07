#include <iostream>

int main() {
	using namespace std;
	long long ind[384];
	// unsigned int indNeg[1000];
	// cout << "podaj liczbe calkowita:  " << endl;
/*	for (int h=2;h<1000;h++) {
			int z=1000;
			while (z!=0) {
				indNeg[h]=0-z;
				z--;
			}
		} */
		
	for (int i=2;i<384;i++) {	
		ind[i]=i+113000;	
	}
	
	for (int w=2;w<384;w++) {
		long long n = ind[w];
		while (n!=1) {
		if (n%2 == 0) {
			n /= 2;
		}
		else {
			n = (3*n) + 1;
		}
		cout << n << endl;
	}
	cout << "Dla liczby " << ind[w+1] << endl;
	}
	/* for (int y=2;y<1000;y++) {
		int j = indNeg[y];
		while (j!=1) {
		if (j%2 == 0) {
			j /= 2;
		}
		else {
			j = (3*j) + 1;
		}
		cout << j << endl;
	}
	cout << "Dla liczby " << indNeg[y+1] << endl;
	}
	*/
	return 0;
	}
	
	




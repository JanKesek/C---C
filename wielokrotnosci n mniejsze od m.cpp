#include <iostream>
using namespace std;

int wielokrotnosci(int n, int m) {
	int ROZN = m/n;
	float tab[ROZN];
	for (int i=0;i<ROZN;i++) {
		if (n*i < m) {
			tab[i] = n*i;
		}
 	}
 	for (int h =0; h<ROZN;h++) {
 		cout << tab[h] << endl;
	 }
}
int main() {
	wielokrotnosci(4,100);
	return 0;
}

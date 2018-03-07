#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
		cout << "Wprowadz liczbe: " << endl;
		cin >> n;
		float tab[n+1];
		tab[0]=0;
		tab[1]=1;
		for (int i=2;i<n+1;i++) {
			tab[i]= tab[i-2]+tab[i-1];
		}
	cout << "N-ty indeks ciagu fibonnaciego to: " << tab[n] << endl;

	return 0;
	
}

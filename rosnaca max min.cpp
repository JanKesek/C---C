#include <iostream>
using namespace std;

int maxValue(int b, int a[]) {

	int max = a[0];
	for (int i=0;i<b;i++) {
		if (a[i]>=max) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	int n;
	cout << "Ile elementow ma zawierac tablica?" << endl;
	cin >> n;
	int tab[n];
	cout << "Wpisz " << n << " elementow: " << endl;
	for (int j=0;j<n;j++) {
		cin >> tab[j];
	}
	cout << "Najwieksza wartosc tablicy to: " << maxValue(n, tab) << endl;
	
	return 0;
}

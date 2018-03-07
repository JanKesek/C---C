#include <iostream>
using namespace std;

int Tab1(int n) {
	int tab1[n];
	int tab2[n];
	int tab3[n];
	int tab11[n];
	for (int i=0;i<3;i++) {
		cout << "Wpisz " << n << " elementow dla " << i+1 << " tablicy" << endl;
		for (int j=0;j<n;j++) {
			if (i==0) {
				cin >> tab1[j];
			}
			else if (i==1) {
				cin >> tab2[j];
			}
			else if (i==2) {
				cin >> tab3[j];
			}
		} 
	}
	for (int m=0;m<n;m++) {
		tab11[m] = tab1[m];
	}
	for (int k=0;k<3;k++) {
		cout << "Tablica " << k+1 << " sklada sie z nastepujacych elementow" << endl;
		for (int l=0;l<n;l++) {
			if (k==0) {
				cout << l+1 << " element " << k+1 << " tablicy to " << tab2[l] << endl;
			}
			else if (k==1) {
				cout << l+1 << " element " << k+1 << " tablicy to " << tab3[l] <<endl;
			}
			else if (k==2) {
				cout << l+1 << " element " << k+1 << " tablicy to " << tab11[l] << endl;
			}
		} 
	}
return NULL;
}

int main() {
	int a;
	cout << "ilosc elementow tablicy: " << endl;
	cin >> a;
	cout << Tab1(a) << endl;
	return 0;
}

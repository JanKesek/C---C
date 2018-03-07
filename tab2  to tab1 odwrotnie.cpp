#include <iostream>
using namespace std;

int main () {
		int n;
	do {
		cout << "wpisz ilosc elementow tablicy: " << endl;
		cin >> n;
	}
	while (n<0);
	int tab1[n];
	int tab2[n];
int l=1;
	for (int i=0;i<n;i++) {
		cout << i+1 << " element pierwszej tablicy to: " << endl;
		cin >> tab1[i];
		
 }
	for (int h=0;h<n;h++) {
	tab2[h]=tab1[n-l];
	l+=1;
}
cout << "Elementy tablicy drugiej to: " << endl;
	for (int j=0;j<n;j++) {
		cout << tab2[j] << endl;
	}
return 0;
}



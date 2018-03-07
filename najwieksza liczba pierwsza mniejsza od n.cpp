#include <iostream>
#include <cmath>
using namespace std;

int prime(int a) {
	int tab[a-2];
	int z = sqrt(a);
	int tab2[z];
	int l=0;
	for (int i=0;i<a-2;i++) {
		tab[i]=i+2;
		for (int w=2;w<sqrt(a);w++) {
		if (tab[i]%w==0) {
			tab[i]=0;
		}
	}

	}
	for (int t=0;t<a-2;t++) {
		if (tab[t] !=0) {
			tab2[l]=tab[t];
			cout << l+1 << " szukana liczba to " << tab2[l] << endl;
			l+=1;
		}
	}
	cout << l << endl;
	return tab2[l-1];
	
}

int main() {
	int n;
	do {
		cout << "Wpisz liczbe n wieksza, lub rowna od 3: " << endl;
		cin >> n;
	}
	while(n<3);
	cout << "Najwieksza liczba pierwsza mniejsza od n to: " << prime(n) << endl;
	return 0;
}

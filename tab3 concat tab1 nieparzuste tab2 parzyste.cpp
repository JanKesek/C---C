#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "ilosc elementow tablicy: " << endl;
	cin >> n;
	
	int tab1[n];
	int tab2[n];
	int tab3[2*n];

	for (int i=0;i<2;i++) {
		cout << "Wpisz " << n << " elementow dla " << i+1 << " tablicy" << endl;
		for (int j=0;j<n;j++) {
			if (i==0) {
				cin >> tab1[j];
			}
			else if (i==1) {
				cin >> tab2[j];
			}	
	}
}

	
	
	int l=0;
	int m=n;
	for (int o=0;o<2*n;o++) {
		if (o<n) {
		
		if (o%2==0) {
			tab3[o] =tab2[l];
			l++;
		}
		else {
			tab3[o] = tab1[l];
			l++;
		}
	}
		else if (o>n) {
			if (o%2==0) {
			tab3[o] =tab2[l];
		}
		else {
			tab3[o] = tab1[l];
		}
		l++
		}
		
		
	}
	
	
	

	for (int k=0;k<2;k++) {
		cout << "Elementy tablicy nr " << k+1 << " sa nastepujace: " << endl;
		for (int p=0;p<n;p++) {
			if (k==0) {
				cout << p+1 << " element tablicy " << k+1 << " to: " << tab1[p] << endl;
			}
			else if (k==1) {
				cout << p+1 << " element tablicy " << k+1 << " to: " << tab2[p] << endl;
			}	
		
	}
	
}
cout << "Elementy tablicy trzeciej bedacej polaczeniem pierwszej i drugiej sa nastepujace: " << endl;
int w =0; 
while(w!=2*n) {
	cout << "Element " << w+1 << " to " << tab3[w] << endl;
	w++;
}
return 0;
}

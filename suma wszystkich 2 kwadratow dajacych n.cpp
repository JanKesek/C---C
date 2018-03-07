#include <iostream>
#include <cmath>

using namespace std;

float squareRoots (const int n) {
	int SUM=0;
	int  tab[n];
	for (int i =0; i<n;i++) {
		cout << pow(i,2) << endl;
		tab[i] = pow(i,2);
	}
	for (int h=0; h<n;h++) {
		for (int j=0;j<n;j++) {
			if (tab[h] + tab[j]==n) {
				cout << "One of those pairs is " << tab[h] << " + " << tab[j] << endl;
				SUM=+tab[h]+tab[j];
			}
		}
	}
return SUM;
	
}

int main () {
	int a;
	cin >> a;
	cout << "Sum is " << squareRoots(a) << endl;
	return 0;
}

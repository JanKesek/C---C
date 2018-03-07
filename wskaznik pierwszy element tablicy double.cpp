#include <iostream>

using namespace std;

double* FirstPointer(int a)  {
	double tab[a];
	cout << "Wpisz " << a << " elementow: " << endl;
	for (int h=0;h<a;h++) {
		cin >> tab[h];
	}
	double* pointr[a];
	for (int i=0;i<a;i++) {
		pointr[i] = &tab[i];
	}
	return pointr[1];
}


int main() {
	
int n;
do {

cout << "Podaj zmienna: " << endl;
cin >> n;
}
while (n<0);
cout << "Wskaznik do pierwszego elementu to: " << FirstPointer(n) << endl;
return 0; 
}

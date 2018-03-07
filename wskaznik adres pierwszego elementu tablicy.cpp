#include <iostream>

using namespace std;

int* FirstPointer(int a)  {
	int tab[a];
	cout << "Wpisz " << a << " elementow: " << endl;
	for (int h=0;h<a;h++) {
		cin >> tab[h];
	}
	int* pointr[a];
	for (int i=0;i<a;i++) {
		pointr[i] = &tab[i];
	}
	return pointr[0];
}
int main() {
	
int n;
do {

cout << "Podaj zmienna: " << endl;
cin >> n;
}
while (n<0);
cout << "Wskaznik do pierwszego wskaznika to: " << FirstPointer(n) << endl;
return 0; 
}

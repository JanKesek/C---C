#include <iostream>
using namespace std;

int ChangePointer(int* pointrb, int n) {
pointrb = &n;
return *pointrb;
 

}

int main ( ) {
	int a, b;
	cout <<  "Podaj dwie wartosci: " << endl;
	cin >> a;
	cin >> b;
	int* pointra= &b;
	
	
	cout << "Po zamianie wskaznik b: " << *pointra << " adres: " << pointra << " wskazuje na : " << ChangePointer(pointra, a) << endl;
	
	return 0;

}

#include <iostream>
using namespace std;

int* BiggerPointer(int* pointr1, int* pointr2) {
	
	if (pointr1 <= pointr2) {
		return pointr1;
	}
	else { 
	return pointr2;
	}

}

int main ( ) {
	int a, b;
	cout <<  "Podaj dwie wartosci: " << endl;
	cin >> a;
	cin >> b;
	int* pointra= &a;
	int* pointrb= &b;
	cout << "Wskaznik mniejszej wartosci to: " << BiggerPointer(pointra, pointrb) << endl;
	
	return 0;

}


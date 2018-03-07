#include <iostream>
using namespace std;

int BiggerPointer(int* pointr1, int* pointr2) {
	int val;
	int var1= *pointr1;
	int var2 = *pointr2;
	pointr1=&var2;
	pointr2=&var1;
    cout << "Wartosci na ktore wskazuja wskazniki ulegly wymianie. Wartosc ktorego wskaznika chcesz wyswietlic? [1/2]" << endl;
    while (val==1 || val==2); {
    	cin >> val;
	}

	if (val==1) {
		return *pointr1;
	}
	else {
		return *pointr2;
	}
	

}

int main ( ) {
	int a, b;
	cout <<  "Podaj dwie wartosci: " << endl;
	cin >> a;
	cin >> b;
	int* pointra= &a;
	int* pointrb= &b;
	cout << "Wartosc pod tym wskaznikiem to: " << BiggerPointer(pointra, pointrb) << endl;
	
	return 0;

}


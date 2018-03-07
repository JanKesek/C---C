#include <iostream>
using namespace std;

void BiggerPointer(int* pointra, int* pointrb) {
	int val;
	int var1= *pointra;
	int var2 = *pointrb;
	if (var2<var1) {
	*pointra=var2;
	*pointrb=var1;
}

    
   

}

int main ( ) {
	int a, b;
	cout <<  "Podaj dwie wartosci: " << endl;
	cin >> a;
	cin >> b;
	int* pointra= &a;
	int* pointrb= &b;
	BiggerPointer(pointra, pointrb); 
	if (b<a) {
		cout << "Wartosci pod wskaznikami ulegly zamianie:  " << *pointra << ", " << *pointrb << endl;
	}
	else {
	cout << "Wartosci pod wskaznikami nie ulegly zamianie:  " << *pointra << ", " << *pointrb << endl;
}
	
	return 0;

}


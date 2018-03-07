#include <iostream>
using namespace std;

int BiggerPointer(int* pointra, int* pointrb) {
int val = *pointra + *pointrb;
return val;

    
   

}

int main ( ) {
	int a, b;
	cout <<  "Podaj dwie wartosci: " << endl;
	cin >> a;
	cin >> b;
	int* pointra= &a;
	int* pointrb= &b;
	
	cout << "Suma 2 wartosci wynosi: " << BiggerPointer(pointra, pointrb)  << " lub innym sposoblem : " << *pointra + *pointrb << endl;
	
	return 0;

}

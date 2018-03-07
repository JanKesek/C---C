#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	do
	{
		cout << "Please enter a non-negative number!\n";
		cin >> n;
	} while (n < 0 ); //the number is negative
	int SUMA=0;
	for (int i=0; i<n+1;i++) {
		SUMA+=pow(i,2);
	}
	cout << "Suma ciagu 0^2+1^2+2^2+...+n^2 wynosi w tym przypadku : " << SUMA << endl;
	return 0;
	
}

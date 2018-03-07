#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	do
	{
		cout << "Please enter a non-negative number bigger than 2" << endl;
		cin >> n;
	} while (n < 2 ); //the number is negative
	int SUMA=1;
	for (int i=2; i<n+1;i++) {
		SUMA*=i;
	}
	cout << "Iloczyn ciagu 2*3*4...*n wynosi w tym przypadku : " << SUMA << endl;
	return 0;
	
}

#include <iostream>
using namespace std;

main() {
	int nr = 1234;
	int nrOfDigits =1;
	cout << 1234 / 10 <<endl;
	
	int tmp = nr;
	while (tmp /= 10) 
	nrOfDigits++;
	
	cout << "the number " << nr << " has " << nrOfDigits << " digits" <<endl;

	for (int i=1;i<=10;i++) {
		for (int j=1; j<=10;j++) {
			cout.width(5);
			cout << i *j <<" ";
		}
		cout << endl;
	}
}

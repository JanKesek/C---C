#include <iostream>
using namespace std;



int Zamiana(int* pointr1, const int* pointr2) {
	int val = *pointr1;
	*pointr2 = val;
	return *pointr2;
}

int main() {
	const int a= 523;
	int b;
	cout << "podaj b: " << endl;
	cin >> b;
	int* pointra = &a;
	const int* pointrb = &b;
	cout << Zamiana(pointra, pointrb) << endl;
	return 0;
}

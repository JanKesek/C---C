#include <iostream>
using namespace std;


int Zamiana(int* pointr1, const int* pointr2) {
	int val = *pointr2;
	*pointr1 = val;
	return *pointr1;
}

int main() {
	const int b=42;
	int a;
	cout << "Wpisz zmienna: " << endl;
	cin >> a;
	int* pointra = &a;
	const int* pointrb = &b;
	cout << Zamiana(pointra, pointrb) << endl;
	return 0;
}

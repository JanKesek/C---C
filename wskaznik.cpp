#include <iostream>

using namespace std;

double* FirstPointer(double n)  {
	
	double* pointra = &n;
	return pointra;
}

int* SecondPointer(FirstPointer(double s), int n) {
	*FirstPointer(s) = &n;
	return FirstPointer;
}


int main() {
	int a;
	int w;
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> a;
	cout << "Podaj druga liczbe calkowita: " << endl;
	cin >> w;
	cout << SecondPointer(a, w) << endl;
	

return 0; 
}

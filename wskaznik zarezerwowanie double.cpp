#include <iostream>

using namespace std;

int main() {
	
double n;
cout << "Podaj zmienna: " << endl;
cin >> n;
double* pointr = &n;
cout << pointr << endl;
return 0; 
}

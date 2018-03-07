#include <iostream>

using namespace std;

int main() {
	
int n;
cout << "Podaj zmienna: " << endl;
cin >> n;
int* pointr = &n;
cout << pointr << endl;
return 0; 
}

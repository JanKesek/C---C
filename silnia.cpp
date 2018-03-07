#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Wpisz liczbe, ktorej silnie chcesz obliczyc: " << endl;
	cin >> n;
	int SUMA=1;
	for (int i=1; i<n+1;i++) {
		SUMA*=i;
	}
	cout << "Silnia liczby to : " << SUMA;
	return 0;
	
}

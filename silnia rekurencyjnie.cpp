#include <iostream>
using namespace std;


long long silnia(int n) {
	if (n < 2 ) {
		return 1;
	}
	else {
		return n*silnia(n-1);
	}
}
int main () {
	int a;
	cout << "Podaj liczbe ktorej silnie chcesz obliczyc: " << endl;
	cin >> a;
	cout << silnia(a);
	return 0;
}

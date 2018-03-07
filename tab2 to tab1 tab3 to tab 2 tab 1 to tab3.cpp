#include <iostream>
using namespace std;

int Tab1(int n) {
	int tab1[n];
	for (int i=0;i<n;i++) {
		cin >> tab1[n];
	}
	for (int j=0;j<n;j++) {
		cout << tab1[j] << endl;
	}
}

int main() {
	int a;
	cout << "ile elementow ma posiadac pierwsza tablica?" << endl;
	cin >> a;
	cout << "Wpisz " << a << " elementow pierwszej tablicy" << Tab1(a);
	return 0;
}

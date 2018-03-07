#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Zdecyduj ile elementow ma zawierac tablica: " << endl;
	cin >> n;
	int tab[n];
	for (int i=0;i<n;i++) {
		cout << "Podaj " << i+1 << " element tablicy" << endl;
		cin >> tab[i];
		
	}
	for (int h=0;h<n;h++) {
			cout << h+1 << " element tablicy razy dwa wynosi: " << tab[h]*2 << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n, m;
		cout << "Wprowadz dwie liczby: " << endl;
		cin >> n;
		cout << " oraz: " << endl;
		cin >> m;

	int SUMA=1;
	if (n>m) {
	
	for (int i=m; i<n+1;i++) {
		SUMA*=i;
	}
}
else if (m>n ) {
	
	for (int i=n; i<m+1;i++) {
		SUMA*=i;
	}
}
	cout << "Iloczyn ciagu n*...*m wynosi w tym przypadku : " << SUMA << endl;
	return 0;
	
}

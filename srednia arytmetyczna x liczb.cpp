#include <iostream>
#include <cmath>

using namespace std;
int main () {

	float a;
	cout << "Wpisz nieujemna liczbe: " <<endl;
	cin >> a;
	if (a<0) {
		cout << "Liczba jest ujemna. Wprowadz liczbe ponownie";
		cin >> a;
	}
	for (int i=0;i<a;i++) {
	if (i*i==a) {
	
	cout << "Pierwiastek 2 stopnia z " << a << " to: " << endl;
	cout<<i;
}
}
	
	 return 0;
}

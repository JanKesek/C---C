#include <iostream>
using namespace std;

int najwiekszydzielnikbezreszty(int a) {
	using namespace std;
	int s=0;
	int h=a-1;
	while (h!=0) {
	
	if (a%h==0) {
		s+=h;
		break;
	}
	else {
		h--;
	}
	 }
	cout << "prawidlowa wartosc to: " << s << endl;
	return s;
	
	
}

int main () {
	int n;
	do {
		cout << "wpisz nieujemna liczbe calkowita: " << endl;
		cin >> n;
	}
	while (n<0);
	najwiekszydzielnikbezreszty(n);
	 return 0;
}

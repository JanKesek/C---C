#include <iostream>
using namespace std;

int main () {
	float a,b,h,  W;
	beginning: cout << "Wybierz figure, jakiej pole chcesz obliczyc, poprzez nacisniecie 1, 2 lub 3: " << endl;
	cout << "1. Trojkat" << endl;
	cout << "2. Kwadrat" << endl;
	cout << "3. Prostokat" << endl;
	cin >> W;
	int POLE;

	if (W==1) {
		
		cout << "Podaj podstawe trojkata: ";
		cin >> a;
		cout << "Podaj wysokosc trojkata: ";
		cin >> h;
		POLE = (a*h) /2;
		cout << "Pole trojkata to: " << POLE << endl;
	}
	else if (W==2) {
		cout << "Podaj bok kwadratu: ";
		cin >> a;
		POLE = a*a;
		cout << "Pole kwadratu to: " << POLE << endl;
	}
	else if (W == 3) {
		cout << "Podaj mniejszy bok prostokata: " <<  endl;
		cin >> a;
		cout << "Podaj wiekszy bok prostokata: " << endl;
		cin >> b;
		POLE = a*b;
		cout << "Pole prostokata to: " << POLE << endl;
	}
	

	return 0;
}


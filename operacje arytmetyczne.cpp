#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main () {
	float a,b,h,  W;
	beginning: cout << "Wybierz operacje arytmetyczna, jaka chcesz wykonac, poprzez nacisniecie 1, 2 lub 3: " << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Dzielenie" << endl;
	cout << "4. Mnozenie" << endl;
	cout << "5. Potegowanie" << endl;
	cout << "6. Pierwiastkowanie" << endl;
	cin >> W;
	int WYNIK;

	if (W==1) {
		
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = a+b;
		cout << "Wynik to: " << WYNIK << endl;
	}
	else if (W==2) {
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = a-b;
		cout << "Wynik to: " << WYNIK << endl;
	}
	else if (W == 3) {
	cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = a/b;
		cout << "Wynik to: " << WYNIK << endl;
	}
		else if (W == 4) {
	cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = a*b;
		cout << "Wynik to: " << WYNIK << endl;
	}
	else if (W == 5) {
	cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = pow(a,b);
		cout << "Wynik to: " << WYNIK << endl;
	}
	else if (W == 6) {
	cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe: ";
		cin >> b;
		WYNIK = pow(a,1/b);
		cout << "Wynik to: " << WYNIK << endl;
	}
	
	return 0;
}

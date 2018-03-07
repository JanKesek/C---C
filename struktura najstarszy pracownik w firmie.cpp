#include <iostream>
#include <cmath>
using namespace std;

struct Pracownicy {
string imie;
	string nazwisko;
	long long pesel;
int wynagrodzenieWKazdymMiesiacu[12];
	int sredniaRocznegoWynagrodzenia;
};



int main() {
	int n;
	cout << "Podaj ilosc pracownikow w firmie : " << endl;
	cin >> n;
	Pracownicy firma[n];
	for (int i=0;i<n;i++) {
		int w=i+1;
		cout << "Podaj imie " << w << " pracownika: " << endl;
		cin >> firma[i].imie;
		cout << "Podaj nazwisko " << w << " pracownika: " << endl;
		cin >> firma[i].nazwisko;
		cout << "Podaj pesel (11 cyfr!) " << w << " pracownika: " << endl;
	do {
	
		cin >> firma[i].pesel;
		cout << firma[i].pesel / pow(10,10) << endl;
	}
	while (10 > firma[i].pesel / pow(10,10)  && firma[i].pesel / pow(10,10) > 0);


		cout << "Podaj wynagrodzenie " << w << " pracownika w kazdym z 12 miesiecy: " << endl;
		for (int w=0;w<12;w++) {	
		cin >> firma[i].wynagrodzenieWKazdymMiesiacu[w];
		firma[i].sredniaRocznegoWynagrodzenia+=firma[i].wynagrodzenieWKazdymMiesiacu[w];
	}
	firma[i].sredniaRocznegoWynagrodzenia/=12;
	
	}
	for (int j=0;j<n;j++) {
		int k=j+1;
		cout << "Oto imie " << k << " pracownika: " << firma[j].imie << endl;
		cout << "Oto nazwisko " << k << " pracownika: " <<  firma[j].nazwisko << endl;
		cout << "Oto pesel " << k << " pracownika: " << firma[j].pesel << endl;
		cout << "Oto wynagrodzenie w kazdym miesiacu " << k << " pracownika: " << endl;
		for (int x=0;x<12;x++) {
			cout << firma[j].wynagrodzenieWKazdymMiesiacu[x] << ", ";
		}
		cout << "Oto srednia rocznego wynagrodzenia " << k << " pracownika: " << firma[j].sredniaRocznegoWynagrodzenia << endl;
	}

	int wiek[n];

	cout << "Najstarszy pracownik ma poczatek pesela  jest to pracownik nr " ;
	return 0;
}

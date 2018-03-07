#include <iostream>
#include <cmath>
using namespace std;

struct Ksiazka {
	string tytul;
	string autor; 
	int ISBN; 
	int lbEgzemplarzy;
};

int main() {
	int n;
	cout << "Podaj wielkosc twojej biblioteki: " << endl;
	cin >> n;
	Ksiazka biblio[n];
	for (int i=0;i<n;i++) {
		int w=i+1;
		cout << "Podaj tytul " << w << " ksiazki: " << endl;
		cin >> biblio[i].tytul;
		cout << "Podaj autora " << w << " ksiazki: " << endl;
		cin >> biblio[i].autor;
		cout << "Podaj ISBN " << w << " ksiazki: " << endl;
		cin >> biblio[i].ISBN;
		cout << "Podaj liczbe egzemplarzy " << w << " ksiazki: " << endl;
		cin >> biblio[i].lbEgzemplarzy;
	}
	for (int j=0;j<n;j++) {
		int k=j+1;
		cout << "Oto tytul " << k << " ksiazki: " << biblio[j].tytul << endl;
		cout << "Oto autor " << k << " ksiazki: " <<  biblio[j].autor << endl;
		cout << "Oto ISBN " << k << " ksiazki: " << biblio[j].ISBN << endl;
		cout << "Oto liczba egzemplarzy " << k << " ksiazki: " << biblio[j].lbEgzemplarzy << endl;
	}
	return 0;
}

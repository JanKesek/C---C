#include <iostream>
#include <ctime>
using namespace std;


struct data {
	int dzien;
	int miesiac;
	int rok;
};

struct ksiazka {
	bool wypozyczona;
	string tytul;
	string autor;
	float cena;
	data zwrot;
};


int KsiazkiNiewypozyczone (int a, ksiazka tab[]) {
	int SUMA=0;
	for (int j=0;j<a;j++) {
		if (tab[j].wypozyczona == false) {
			SUMA+=1;
		}
	}
	return SUMA;
}


int NajtanszaKsiazkaKtoraMaBycZwroconaJutro (int a, ksiazka tab[] ) {
	int tabSzuk[a];
	float MIN;
	int l;
	int z=0;
	time_t now;
	struct tm nowLocal;
	now = time(NULL);
	nowLocal = *localtime(&now);
	
	for (int i=0;i<a;i++) {
		if (tab[i].zwrot.dzien -nowLocal.tm_mday == 1 &&  tab[i].zwrot.miesiac -(nowLocal.tm_mon+1) == 0 && tab[i].zwrot.rok - (nowLocal.tm_year+1900) == 0 && tab[i].wypozyczona == true ) {
			MIN = tab[i].cena;
			z++;
		}
		
	}
	for (int i=0;i<a;i++) {
		if (tab[i].zwrot.dzien -nowLocal.tm_mday == 1 &&  tab[i].zwrot.miesiac -(nowLocal.tm_mon+1) == 0 && tab[i].zwrot.rok - (nowLocal.tm_year+1900) == 0 && tab[i].wypozyczona == true) {
			MIN = tab[i].cena;
			l=i;
		}
		
	} 
	for (int j=0;j<a;j++) {
		if (tab[j].zwrot.dzien -nowLocal.tm_mday == 1 &&  tab[j].zwrot.miesiac -(nowLocal.tm_mon+1) == 0 && tab[j].zwrot.rok - (nowLocal.tm_year+1900) == 0) {
			if (tab[j].cena < MIN) {
				MIN = tab[j].cena;
				l=j;
			}
		}
		
	}
	if (z == 0) {
		cout << "Brak ksiazek z jutrzejszym terminem oddania"  << endl;
		return 0;
		
	}
	else {
	
	cout << "Oto najtansza ksiazka ktora ma zostac oddana jutro: " << tab[l].tytul << ", " << tab[l].autor << " a jej cena to: " << endl;
	return tab[l].cena;
}
}

int main() {
	int a;
	cout << "Ile ksiazek zawiera biblioteka? " << endl;
	cin >> a;
	ksiazka biblio[a];
	for (int i=0;i<a;i++) {
		string wybor;
		cout << "Czy ksiazka nr " << i+1 << " jest wypozyczona? (T/N) " << endl;
		cin >> wybor;
		if (wybor == "T" || wybor == "t") {
			biblio[i].wypozyczona = true;
		}
		else {
			biblio[i].wypozyczona = false;
		}
		cout << "Podaj tytul ksiazki: " << endl;
		cin >> biblio[i].tytul;
		cout << "Podaj autora ksiazki: " << endl;
		cin >> biblio[i].autor;
		cout << "Podaj cene ksiazki: " << endl;
		cin >> biblio[i].cena;
		cout << "Podaj kolejno: dzien, miesiac i rok oddania ksiazki do biblioteki (dzien bez zera): " << endl;
		cin >> biblio[i].zwrot.dzien;
		cin >> biblio[i].zwrot.miesiac;
		cin >> biblio[i].zwrot.rok;
		
		
	}
	
	time_t now;
	struct tm nowLocal;
	now = time(NULL);
	nowLocal = *localtime(&now);
	
	cout << "Suma ksiazek niewypozyczonych: " << KsiazkiNiewypozyczone(a, biblio) << endl;
	cout << "Dzisiaj jest: " << nowLocal.tm_mday << " " << nowLocal.tm_mon+1 << " " << nowLocal.tm_year+1900 << endl;
	cout <<	NajtanszaKsiazkaKtoraMaBycZwroconaJutro(a, biblio) << endl;
	return 0;
}

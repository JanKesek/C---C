#include <iostream>
using namespace std;

struct ksiazki {
	string nazwa;
	string autor;
	int rok;
	float cena;
	bool twarda_okladka;
	bool podrecznik;
};


int IsBookATextbook (int a, ksiazki tab[]) {
	int SUMA=0;
	for (int i=0;i<a;i++) {
		if (tab[i].twarda_okladka == true && tab[i].podrecznik == false) {
			SUMA+=1;
		}
		 if (tab[i].twarda_okladka == false && tab[i].podrecznik == true) {
			SUMA+=1;
		}
	}
	return SUMA;
}


int MostExpensiveTextbookBefore1976 (int a, ksiazki tab[]) {
	int tabSzuk[a];
	int tabIndx[a];
	int SUMA=0;
	int l=0;
	for (int i=0;i<a;i++) {
		tabSzuk[0]=-1;
		if (tab[i].rok < 1976 && tab[i].podrecznik == true)  {
			tabSzuk[l] = tab[i].cena;
			tabIndx[l] = i;
			l++;
		}
		
		 
	}
	int MAX=tabSzuk[0];
	int MAXIndx=tabIndx[0];
	for (int j=1;j<a;j++) {
		if (tabSzuk[j] > MAX) {
			MAX=tabSzuk[j];
			MAXIndx=tabIndx[j];
		}
	}
	cout << "Najdrozszy podrecznik wydany przed 1976 (wypisz -1 jesli brak) to: " << endl;
	if (MAX==-1) {
		return -1;
	}
	else {
	
	cout  << tab[MAXIndx].nazwa << ", " << tab[MAXIndx].autor << ", " << tab[MAXIndx].rok << ", "<< tab[MAXIndx].cena <<", "<< tab[MAXIndx].twarda_okladka <<", "<< tab[MAXIndx].podrecznik << " o indeksie: " << endl;
	return MAXIndx;
}
}


int main () {
	int l;
	cout << "Podaj ilosc ksiazek w bibliotece: " << endl;
	cin >> l;
	ksiazki biblio[l];
	
	for (int i=0;i<l;i++) {
		cout << "Podaj nazwe " << i+1 << "ksiazki: " << endl;
		cin >> biblio[i].nazwa;
		cout << "Podaj autora " << i+1 << "ksiazki: " << endl;
		cin >> biblio[i].autor;
		cout << "Podaj rok wydania " << i+1 << "ksiazki: " << endl;
		cin >> biblio[i].rok;
		cout << "Podaj cene " << i+1 << "ksiazki: " << endl;
		cin >> biblio[i].cena;
		string wybor;
		string wybor2;
		cout << "Czy " << i+1 << "ksiazka ma twarda okladke (T/F): " << endl;
		cin >> wybor;
		if (wybor == "T") {
			biblio[i].twarda_okladka = true;
		}
		else {
			biblio[i].twarda_okladka = false;
		}
		cout << "Czy " << i+1 << "ksiazka jest podrecznikiem? (T/F): " << endl;
		cin >> wybor2;
		if (wybor2 == "T") {
			biblio[i].podrecznik =true;
		}
		else {
			biblio[i].podrecznik = false;
		}
	}
	for (int x=0;x<l;x++) {
		cout << biblio[x].twarda_okladka << endl;
		cout << biblio[x].podrecznik << endl;
	}
	
	cout << "Suma ksiazek o twardej okladce oraz podrecznik o miekkiej okladce to: " << IsBookATextbook(l,biblio) << endl;
	cout <<    MostExpensiveTextbookBefore1976(l,biblio) << endl;
	return 0;
}

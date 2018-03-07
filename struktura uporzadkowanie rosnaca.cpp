#include <iostream>
using namespace std;


struct Uczen {
	string imie;
	string nazwisko;
	int wiek;
};

int MinWartosc (int a, Uczen tab[]) {
	int MIN = tab[0].wiek;
	for (int i=1;i<a;i++) {
		if (tab[i].wiek<MIN) {
			MIN = tab[i].wiek;
		}
	}
	return MIN;
}
string ImieMinWartosc (int a, Uczen tab[]) {
	int MIN = tab[0].wiek;
	string MINWart = tab[0].imie;
	for (int i=1;i<a;i++) {
		if (tab[i].wiek<MIN) {
			MIN = tab[i].wiek;
			MINWart = tab[i].imie;
		}
	}
	return MINWart;
}
string NazwiskoMinWartosc (int a, Uczen tab[]) {
	int MIN = tab[0].wiek;
	string MinWart = tab[0].nazwisko;
	for (int i=1;i<a;i++) {
		if (tab[i].wiek<MIN) {
			MIN = tab[i].wiek;
			MinWart = tab[i].nazwisko;
		}
	}
	return MinWart;
}

int MaxWartosc (int a, Uczen tab[]) {
	int MAX = tab[0].wiek;
	for (int i=1;i<a;i++) {
		if (tab[i].wiek>MAX) {
			MAX = tab[i].wiek;
		}
	}
	return MAX;
}

int IndxMinWartosc (int a, Uczen tab[]) {
	int Min = tab[0].wiek;
	int Indx=0;
	for (int i=1;i<a;i++) {
		if (tab[i].wiek<Min) {
			Min = tab[i].wiek;
			Indx=i;
		}
	}
	return Indx;
}

int Rosnaca(int a,Uczen tab[]) {
	Uczen tab2[a];

	int z = MaxWartosc(a, tab) +1;
	for (int i=0;i<a;i++) {
		int l1=MinWartosc(a,tab);
		string l2=ImieMinWartosc(a,tab);
		string l3=NazwiskoMinWartosc(a,tab);

		tab2[i].wiek=l1;
		tab2[i].imie=l2;
		tab2[i].nazwisko=l3;
		tab[IndxMinWartosc(a, tab)].wiek = 1000;

	}
	for (int j=0;j<a;j++) {
		cout << tab2[j].imie << ", ";
		cout << tab2[j].nazwisko <<", ";
		cout << tab2[j].wiek << ", ";
	}
	return 0;
}

int main() {
	int a;
	cout << "Jak duza ma byc klasa? " << endl;
	cin >> a;
	Uczen klasa[a];
	for (int i=0;i<a;i++) {
		cout << "Wpisz imie " << i+1 << " ucznia: " << endl;
		cin >> klasa[i].imie;
		cout << "Wpisz nazwisko " << i+1 << " ucznia: " << endl;
		cin >> klasa[i].nazwisko;
		cout << "Wpisz wiek " << i+1 << " ucznia: " << endl;
		cin >> klasa[i].wiek;
	}
	cout << "Klasa w kolejnosci rosnacej (wiek): " << endl;
	cout << Rosnaca(a, klasa);
	return 0;
}

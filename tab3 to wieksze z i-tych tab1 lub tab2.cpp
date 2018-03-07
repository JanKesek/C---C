#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "ile elementow ma posiadac pierwsza tablica?" << endl;
	cin >> a;
	int tab1[a];
	int tab2[a];
	int tab3[a];
	cout << "Wpisz " << a << " elementow tablicy pierwszej: " << endl;
	for (int i=0;i<a;i++) {
		cin >> tab1[i];
	}
	cout << "Wpisz " << a << " elementow tablicy pierwszej: " << endl;
	for (int j=0;j<a;j++) {
		cin >> tab2[j];
		if (tab2[j]>=tab1[j]) {
		tab3[j]=tab2[j];
	}
	else {
		tab3[j]=tab1[j];
	}
	}
	cout << "I-ty element tablicy trzeciej jest wiekszym z i-tego elementu tablicy drugiej i pierwszej. Oto elementy trzeciej tablicy: " << endl;
	for (int h=0;h<a;h++) {
		cout << tab3[h] << endl;
	}
}

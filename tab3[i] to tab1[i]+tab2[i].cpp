#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "ile elementow ma posiadac elementow?" << endl;
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
		tab3[j]=tab2[j]+tab1[j];
	}
	cout << "I-ty element tablicy trzeciej jest suma i-tego elementu tablicy drugiej i pierwszej. Oto elementy trzeciej tablicy: " << endl;
	for (int h=0;h<a;h++) {
		cout << tab3[h] << endl;
	}
}

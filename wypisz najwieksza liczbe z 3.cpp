#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	const int l =5;
    float tab[l];
    cout<<"Podaj  "<< l << " liczb: " << endl;
    float SUMA = 0;
    for (int t=0;t<l;t++) {
    	cin >> tab[t];
	}
for (int i = 0; i<l;i++) {
	SUMA += tab[i];
}
float SREDNIA = SUMA / l;
cout << "Srednia liczb to: " << SREDNIA <<endl;
float MINROZN;
if (tab[0] > SREDNIA){
	MINROZN = tab[0]-SREDNIA;
}
else if (tab[0]< SREDNIA){
MINROZN = SREDNIA - tab[0];
}
float tmp, NAJBSREDN;
for (int a=1;a<l;a++) {
	if (tab[a] > SREDNIA){
		tmp = tab[a] - SREDNIA;
	}
	else if (tab[a] < SREDNIA) {
		tmp = SREDNIA - tab[a];
	}
	if (tmp < MINROZN) {
		MINROZN = tmp;
		NAJBSREDN = tab[a];
	}
}
cout << "Liczba najlblizsza sredniej to: " << NAJBSREDN << endl;
return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
float a, bezwa, b, bezwb;
cout << "Podaj dwie liczby: " << endl;
cin >> a;
cin >> b;
if (a<0) {
	bezwa=a*-1;
}
else { bezwa=a;}
if (b<0) {
	bezwb=b*-1;
}
else {
	bezwb=b;
}
cout << "Wartosc bezwgledna z " << a << " to " << bezwa << " a wartosc bezwgledna z " << b << "  to " << bezwb << endl;
cout << "Liczba o wiekszej wartosci bezwzglednej to: ";
if (bezwa>bezwb) {
	cout << a;
}
else { cout << b;
}


return 0;
}

#include <iostream>
using namespace std;

int main() {
	float a1, a2,  b1, b2, c1, c2;
	cout << "Wyobraz sobie uklad 2 rownan z 2 niewiadomymi: a1x + b1y = c1 , oraz a2x+b2y=c2. Aby rozwiazac uklad wpisz a1:" << endl;
		cin >> a1;
		cout << " , wpisz b1: " << endl;
		cin >> b1;
		cout << " , wpisz c1: "<< endl;
		cin >> c1;
		cout << " , wpisz a2: " << endl;
		cin >> a2;
		cout << " , wpisz b2: "<< endl;
		cin >> b2;
		cout << " , oraz wpisz ostatnia liczbe po prawej,  c2: "<< endl;
		cin >> c2;
	float W = a1 * b2 - a2*b1;
	float Wx= c1*b2 - b1*c2;
	float Wy=a1*c2 - c1*a2;
	float x = Wx / W;
	float y = Wy / W;
	cout << "Rozwiazaniami ukladu rownan sa: x = " << x << " oraz y= " << y <<endl;
		
		return 0;
	}
	


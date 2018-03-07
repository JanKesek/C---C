#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


float Suma (int n, float m) {
	float SUMA =0;
for (int i=0;i<n+1;i++) {
	cout << pow (i, 1/m) << endl;
	SUMA= SUMA + pow (i,1/m);
}
return SUMA;
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << "Suma ciagu pow(0,1/m)+ pow(1,1/m) +... + pow(n, 1/m) wynosi: " << Suma (a,b) << endl;
	return 0;
}

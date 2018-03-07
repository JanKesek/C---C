#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {

	float a;
	cout << "Wpisz liczbe wymierna: " <<endl;
	cin >> a;
	
	cout << a << " zaokraglona do 2 miejsc po przecinku to " << fixed << setprecision(2) << a << endl;
	


	
	 return 0;
}

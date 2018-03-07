#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
using std::fixed;


int potegowanie(int n) {
	float b; long long a; 
	if (n<0) {
	b = pow(2,n);

	cout << fixed;
	cout << "2 to the power of n equals " << setprecision(30) << b;
	return b;
}

else {
	a = pow(2,n);
	cout << "2 to the power of n equals " << a;
	return a;
}
}

int main() {
	int c;
	cout << "Write number to the power of you want to make 2: " << endl;
	cin >> c;
	potegowanie(c);
	return 0;
}

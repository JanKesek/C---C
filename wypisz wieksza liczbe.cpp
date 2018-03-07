#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Podaj trzy liczby: " << endl;
cin >> a;
cin >>b ;
cin >> c;
int max = a;
    if (b>max) {
    	max=b;
	}
	if (c>max) {
		max = c;
	}
	cout << max;


return 0;
}

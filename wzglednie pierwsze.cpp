#include <iostream>
 
using namespace std;
 
int nwd (int a, int b){
    if(b!=0) {
    	return nwd(b,a%b);
	}
	return a;
}
 
int main () {
        int n, SUMA=0;
        cin >> n;

       for (int i=0;i<n;i++) {
        if (nwd(i,n) == 1) {
        	SUMA+=i;

			}
		else SUMA=SUMA;

		}
	cout << SUMA;
	
    return 0;
}

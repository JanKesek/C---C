#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    int a;
    
    
    do
    {
        cout << "Podaj liczbe nieujemna: ";
    	cin >> a;
    }
    while(a<0);
    int SUMA=0;
    for (int b=0;b<6;b++) {
	
do
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    while(a!=b);
    if (a==1) {
    	SUMA+=b;
	}
		}
		cout << SUMA;
	return 0;
}

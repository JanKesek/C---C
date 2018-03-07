#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float liczba;
    cout<<"Podaj liczbe wymierna: ";
    cin>>liczba;
    cout.setf( ios::scientific );
    cout << liczba << endl;

return 0;
}

#include <iostream>

using namespace std;

main () {
	int a;
	int arr[3]; 
	arr[0] = 10;
	arr[1] = 50;
	arr[2]=500;
	arr[3]=215;
	
	cout << "arr [0] = " << arr[0] << " , address: " << &arr[0] << endl;
	cout << "arr [1] = " << arr[1] <<" , address: " << &arr[1] <<endl;
	cout << "arr [2] = " << arr[2] <<" , address: " << &arr[2] <<endl;
	cout << "arr [3] = " << arr[3] <<" , address: " << &arr[3] <<endl;

}


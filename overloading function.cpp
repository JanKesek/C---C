#include <iostream>

using namespace std;

int power(int, int);
double power (double,double);
double power(double,int);
double power(int,double);
int main () {
	// 2^3
	cout << power(4,20.4) <<endl;
	return 0;
}

int power(int b, int e) {
	int tmp =b;
	int i =0;
	while(i++<e) {
		b=b*tmp;
		cout << tmp << " ^ " << i << " = " << b << endl;
	}
	return b;
}
double power(double b, double e) {
	double tmp =b;
	int i=0;
	while(i++<e) {
		b=b*tmp;
		cout << tmp << " ^ " << i << " = " << b << endl;
	}
	return b;
}
double power(double b, int e) {
	double tmp =b;
	int i=0;
	while(i++<e) {
		b=b*tmp;
		cout << tmp << " ^ " << i << " = " << b << endl;
	}
	return b;
}
double power(int b, double e) {
	double tmp =b;
	int i=0;
	while(i++<e) {
		b=b*tmp;
		cout << tmp << " ^ " << i << " = " << b << endl;
	}
	return b;
}

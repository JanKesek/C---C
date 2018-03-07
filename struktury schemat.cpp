#include <iostream>
#include <stdafx>
#include <cmath>
using namespace std;

struct point {
	int x, y;
	char nazwa;
};

int main () {
	point pierwszyPunkt,drugiPunkt;
	cout<<"Podaj nazwe pierwszego punktu: ";
	cin>>pierwszyPunkt.nazwa;
	cout<<"Podaj wspolrzedna x punktu "<<pierwszyPunkt.nazwa<<": ";
	cin>>pierwszyPunkt.x;
	cout<<"Podaj wspolrzedna y punktu "<<pierwszyPunkt.nazwa<<": ";
	cin>>pierwszyPunkt.y;
	
	cout<<"Podaj nazwe pierwszego punktu: ";
	cin>>drugiPunkt.nazwa;
	cout<<"Podaj wspolrzedna x punktu "<<drugiPunkt.nazwa<<": ";
	cin>>drugiPunkt.x;
	cout<<"Podaj wspolrzedna y punktu "<<drugiPunkt.nazwa<<": ";
	cin>>drugiPunkt.y;
	
	
	cin.get();cin.get();
	return 0;
}



double odleglosc(point A, point B)
{
	return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}

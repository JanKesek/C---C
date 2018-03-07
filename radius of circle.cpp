#include <iostream>
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);

int main() {
	
	return 0;
}
void initMenu() {
	cout << "Enter option:" << endl;
	cout << "1.Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Triangle" << endl;
}
void menuDecision (int choice) {
	double r, a ,b, h;
	switch (choice) {
		case 1:
			cout << "Enter the radius: " << endl;
			cin >> r;
			areaCircle(r);
			break;
		case 2:
			cout << "Enter the side of a square: " << endl;
			cin >> a;
			areaCircle(a);
			break;
		case 3:
			cout << "Enter the width and height of a rectangle: " << endl;
			cin >> a >>b;
			areaCircle(a, b);
			break;
		case 4:
			cout << "Enter the height of a triangle: " << endl;
			cin >> h;
			areaCircle(h);
			break;
		default:
			cout << "You didn't choose any of the option" << endl;
	}
double areaCircle(double r)
 {
		double result = PI * r*r;
		cout << "The area of circle that radius is " << r << " = " << result << endl;
	}
	double areaSquare(double a) {
		double result = a*a;
		cout << "The area of square that side is " << a
	}
	
}

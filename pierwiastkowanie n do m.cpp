#include <iostream>
using namespace std;
int powerOf(float n, float e)

{
	
// We want 5^4
    float T = 1;

    for(float k=1; k<=e; k++) {
	
	T = T*n;
}
    return T;
}
int main() {
	float a, b;
	int  t;
	float q;
	cout << "Number: " << endl;	
	cin >> a;
	cout << " to the root of: " << endl;
	cin >> b;
	for (int i=0; i<a;i++) {
		t=powerOf(i, b) - a;
		if (t==0) {
			cout << i << endl;
			break;			
		}
	}
	if (t!=0) {
		for (float r=0; r<a;r+=0.00001) {
		q=powerOf(r, b) -a;
		if (q==0) {
		
		cout << r << endl;
		break;
	}
	}
	} 
	return 0;
}

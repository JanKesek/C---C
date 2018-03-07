#include <iostream>
#include <cmath>
using namespace std;

int pow2(int n) {
    return 1 << n;
}

int main() {
    int c;
    cout << "Gimme number " << endl;
    cin >> c;
    cout << "2 to the power of " << c << " equals " << pow2(c);
}

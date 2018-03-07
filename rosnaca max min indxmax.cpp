#include <iostream>
using namespace std;
 
int maxValue(int b, int a[]) {
 
    int max = a[0];
    for (int i=0;i<b;i++) {
        if (a[i]>=max) {
            max = a[i];
        }
    }
    return max;
}
int maxValueIndex(int b, int a[]) {
    int maxIndx;
    int max = a[0];
    for (int i=0;i<b;i++) {
        if (a[i]>=max) {
            max = a[i];
            maxIndx=i;
        }
    }
    return maxIndx;
}
 
int minValue(int b, int a[]) {
 
    int min = a[0];
    for (int i=0;i<b;i++) {
        if (a[i]<=min) {
            min = a[i];
        }
    }
    return min;
}
 
int main() {
    int n;
    cout << "Ile elementow ma zawierac tablica?" << endl;
    cin >> n;
    int tab[n];
    cout << "Wpisz " << n << " elementow: " << endl;
    for (int j=0;j<n;j++) {
        cin >> tab[j];
    }
 
    int z = minValue(n, tab) - 1;
    int l=0;
    int tabRosn[n];
    for (int h=0;h<n;h++) {
        tabRosn[l] = maxValue(n,tab);
        tab[maxValueIndex(n,tab)]=z;
        l++;
    }
    cout << "Tablica rosnaco: " << endl;
    for (int k=0;k<n;k++) {
        cout << tabRosn[k] << endl;
    }
    return 0;
}

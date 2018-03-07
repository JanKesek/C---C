#include <vector>
#include <iostream>
using namespace std;

int maxValue(int b, vector<int> a) {

    int max = a[0];
    for (int i = 0; i<b; i++) {
        if (a[i] >= max) {
            max = a[i];
        }
    }
    return max;
}
int maxValueIndex(int b, int a[]) {
    int maxIndx;
    int max = a[0];
    for (int i = 0; i<b; i++) {
        if (a[i] >= max) {
            max = a[i];
            maxIndx = i;
        }
    }
    return maxIndx;
}

int minValue(int b, vector<int> a) {

    int min = a[0];
    for (int i = 0; i<b; i++) {
        if (a[i] <= min) {
            min = a[i];
        }
    }
    return min;
}
int minValueIndex(int b, vector<int> a) {

    int min = a[0];
    int minIndex;
    for (int i = 0; i<b; i++) {
        if (a[i] <= min) {
            min = a[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int n;
    cout << "Ile elementow ma zawierac tablica?" << endl;
    cin >> n;
    vector<int> tab;
    cout << "Wpisz " << n << " elementow: " << endl;
    for (int j = 0; j<n; j++) {
        int input;
        cin >> input;
        tab.push_back(input);
    }

    int z = maxValue(n, tab) + 1;
    int l = 0;
    vector<int> tabRosnac;
    tabRosnac.resize(n);
    for (int h = 0; h<n; h++) {
        tabRosnac[l] = minValue(n, tab);
        tab[minValueIndex(n, tab)] = z;
        l++;
    }
    cout << "Tablica rosnaca: " << endl;
    for (int k = 0; k<n; k++) {
        cout << tabRosnac[k] << endl;
    }
    return 0;
}

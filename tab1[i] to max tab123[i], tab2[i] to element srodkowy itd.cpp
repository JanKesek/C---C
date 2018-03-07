#include <iostream>
using namespace std;

int MaxVal(int a, int b[]) {
	int max = b[0];
	for (int k=1;k<a;k++) {
		if (b[k] >= max) {
			max=b[k];
		}
	}
	return max;
}
int MinVal(int a, int b[]) {
	int min = b[0];
	for (int k=1;k<a;k++) {
		if (b[k] <= min) {
			min=b[k];
		}
	}
	return min;
}
int IndxMax(int a, int b[]) {
	int Index;
	int max = b[0];
	for (int k=1;k<a;k++) {
		if (b[k] >= max) {
			max = b[k];
			Index=k;
		}
	}
	return Index;
}

int IndxMin(int a, int b[]) {
	int IndexMin;
	int min = b[0];
	for (int k=1;k<a;k++) {
		if (b[k] <= min) {
			min = b[k];
			IndexMin=k;
		}
	}
	return IndexMin;
}


int main() {
	 int n;
	cout << "ilosc elementow tablicy: " << endl;
	cin >> n;
	
	int tab1[n];
	int tab2[n];
	int tab3[n];

	for (int i=0;i<3;i++) {
		cout << "Wpisz " << n << " elementow dla " << i+1 << " tablicy" << endl;
		for (int j=0;j<n;j++) {
			if (i==0) {
				cin >> tab1[j];
			}
			else if (i==1) {
				cin >> tab2[j];
			}	
			else {
				cin >> tab3[j];
			}
	}
}
for (int c=0;c<3;c++) {
		cout << n << " elementow dla " << c+1 << " tablicy wejsciowej" << endl;
		for (int d=0;d<n;d++) {
			if (c==0) {
				cout << tab1[d] << endl;
			}
			else if (c==1) {
				cout << tab2[d] << endl;
			}	
			else {
				cout << tab3[d] << endl;
			}
	}
}

int tabPomoc[3];
int maxPomoc;
	for (int z=0;z<n;z++) {
		tabPomoc[0] = tab1[z];
		tabPomoc[1] = tab2[z];
		tabPomoc[2] = tab3[z];
		
		tab1[z]=MaxVal(3,tabPomoc);
		tab3[z]=MinVal(3,tabPomoc);
		
		for (int q=0;q<3;q++) {
			if (q!=IndxMax(3, tabPomoc) && q!= IndxMin(3,tabPomoc)) {
				tab2[z] = tabPomoc[q];
			}
		}
	}
	
	
	cout << "Elementy tablic po zmiane " << endl;
	for (int r=0;r<3;r++) {
		cout << n << " elementow dla " << r+1 << " tablicy po zmianie" << endl;
		for (int w=0;w<n;w++) {
			if (r==0) {
				cout << tab1[w] << endl;
			}
			else if (r==1) {
				cout << tab2[w] << endl;
			}	
			else {
				cout << tab3[w] << endl;
			}
	}
}
	
	return 0;
}


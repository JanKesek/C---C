#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct przedmiot {
string nazwa;
string prowadzacy;
int liczba_studentow;
int liczba_grup;
};


int main() {



int liczba = 5;
przedmiot tablica[liczba];
ifstream file_("test.txt");
string a[liczba];
string b[liczba];
int c[liczba];
int d[liczba];


for (int i=0;i<liczba;i++) {
//	if (file_.is_open()) {

		while (file_ >> a[i] >>   b[i] >>  c[i] >> d[i]) {
		
		//cout << a[i] << " " <<   b[i] << " " <<  c[i] << " " <<   d[i] << "\n";
			tablica[i].nazwa = a[i];
			tablica[i].prowadzacy = b[i];
			tablica[i].liczba_studentow = c[i];
			tablica[i].liczba_grup = d[i];
		}
	
}

//}
// file_.close();



for (int z=0; z<liczba;z++ ) {
 
	cout << tablica[z].nazwa << endl;
	cout << tablica[z].prowadzacy << endl;
	cout << tablica[z].liczba_studentow << endl;
	cout << tablica[z].liczba_grup << endl; 
}


return 0;

}

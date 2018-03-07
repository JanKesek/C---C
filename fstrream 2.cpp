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

ifstream inFile;
string a[liczba];
string b[liczba];
int c[liczba];
int d[liczba];

inFile.open("test.txt");
for (int j=0;j<liczba;j++) {
getline(inFile, a[j], " "); // use ' ' as separator, default is '/n'. Now name is "John".
getline(inFile, b[j], " "); // Now temp is "Smith"
getline(inFile, c[j], " ");
getline(inFile, d[j]);

	tablica[j].nazwa = a[j];
	tablica[j].prowadzacy = b[j];
	tablica[j].liczba_studentow = c[j];
	tablica[j].liczba_grup = d[j];
}
inFile.close();    
/*
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
// file_.close(); */



for (int z=0; z<liczba;z++ ) {
 
	cout << tablica[z].nazwa << endl;
	cout << tablica[z].prowadzacy << endl;
	cout << tablica[z].liczba_studentow << endl;
	cout << tablica[z].liczba_grup << endl; 
}


return 0;

}

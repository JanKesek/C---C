#include <iostream>
using namespace std;
int main () {

	const int x = 6;
	int tab[x];
	 cout << "Wpisz " << x << " liczby calkowite: "<<endl;
	 for (int a=0;a<x;a++)	{
	  cin >> tab[a];
	   }
	 int SUMA =0;
	for (int i=0;i<x;i++) {
		SUMA+=tab[i];
	}
	
	int SREDNIA = SUMA/x;
	 cout << "Srednia arytmetyczna tych liczb to: " << endl;
	 cout  << SREDNIA << endl;
	 return 0;
}

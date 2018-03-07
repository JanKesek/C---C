#include <iostream>
using namespace std;

main() {
	double var1,var2;
	beginning:
	cout << "enter first number: " ;
	cin >> var1;
	cout << " , enter second number: ";
	cin >> var2;
	
	cout << "What do you want to do with this number?" << endl;
	cout << "+ - add" << endl;
	cout << "- - substract" << endl;
	cout << "* - multiply" << endl;
	cout << "/ - divide" << endl;
	
	char decision;
	cin >> decision;
	switch (decision) {
		case '+':
			cout << var1 <<"+" <<var2 << "=" << (var1+var2) << endl;
			break;
		case '-':
			cout << var1 <<"-" <<var2 << "=" << (var1-var2) << endl;
			break;
		case '*':
			cout << var1 <<"*" <<var2 << "=" << (var1*var2) << endl;
			break;
		case '/':
			if (var2)
			cout << var1 <<"/" <<var2 << "=" << (var1/var2) << endl;
			else cout << "you cant divide by 0";
			break;
		default: cout << "you entered wrong character";
	}

	char decision2;
	cout << "Do you want to continue this program? (Y/N): ";
	cin >> decision2;
	if (decision2 =='Y' || decision2=='y') 
		goto beginning;
}

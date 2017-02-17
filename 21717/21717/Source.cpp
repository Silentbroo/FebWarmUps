#include <iostream>
using namespace std;
int main() {
	char input;

	while (1) {
		cout << "Would you like a cookie ?(Yes-y or No=N) " << endl;
		cin >> input;

		if (input == 'y')
			cout << "COOKIES OMNOM NOM COOKIES" << endl;

		else if (input == 'n')
			cout << "why no cookies" << endl;
	}
}

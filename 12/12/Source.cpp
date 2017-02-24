#include <iostream>
using namespace std;
int main() {
	int number1;
	int number2;
	char letter;
	double answer;

	cout << "Can I have the first number?" << endl;
	cin >> number1;

	cout << "Can I have the secound number?" << endl;
	cin >> number2;

	cout << "Would you like to add ('a') subtract ('s') multiply ('m') or divide ('d')" << endl;
	cin >> letter;

	if (letter == 'a') {
		answer = number1 + number2;
		cout << number1 << " plus " << number2 << " is " << answer << endl;
	}
	else if (letter == 's') {
		answer = number1 - number2;
		cout << number1 << " subtract " << number2 << " is " << answer << endl;
	}
	else if (letter == 'm') {
		answer = number1*number2;
		cout << number1 << " multiply " << number2 << " is " << answer << endl;
	}
	else if (letter = 'd') {
		answer = number1 / number2;
		cout << number1 << " divide " << number2 << " is " << answer << endl;

	}

}

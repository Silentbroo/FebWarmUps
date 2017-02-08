#include <iostream>
using namespace std;
int main() {
	int number1;
	int number2;
	char letter;
	double answer;

	cout << "Can I have the base of the cone?" << endl;
	cin >> number1;

	cout << "Can I have the height of the cone?" << endl;
	cin >> number2;

	answer = number1 + number2 / 3;

	cout << "the cone volume is" << answer << endl;
}

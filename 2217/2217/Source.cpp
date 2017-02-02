#include <iostream>
using namespace std;

int main() {
	char songs;

	cout << "Choose your song" << endl;


	cout << "1=suga suga by Baby Bash" << endl;

	cout << "2=Say Godbye by Chris Brown" << endl;

	cout << "3=Let me love you Mario" << endl;
	cin >> songs;

	if (songs == '1')
		cout << "You got me lifted shifted higher than a ceilin' And ooh wee it's the ultimate feelin" << endl;

	else if (songs == '2')
		cout << "Let's talk; I got alot to say So I guess I'll start by sayin' that I love you" << endl;

	else if (songs == '3')
		cout << "Baby I just don't get it Do you enjoy being hurt ? " << endl;

}
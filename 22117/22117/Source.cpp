#include <iostream>
using namespace std;
int main(){
	char input;
	cout << "What type of cookie do you want?" << endl;
	cout << " v=vanilla, c=choclate chip, p= peanut butter" << endl;
	cin >> input;

	switch (input) {
	


case 'v':
	cout << "You got a vanilla cookies!" << endl;


	break;
case 'c':
	cout << "You got a Chaoclate Chip cookie!" << endl;

	break;
case 'p':
	cout << "You got a Peanut butter cookie!" << endl;
	
	break;
	
}//switch

}//main
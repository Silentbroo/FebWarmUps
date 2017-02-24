#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double count = 1;
	for (int i = 1; i <= 11; i++) {
		count = count * 10;
		cout << setprecision(0) << fixed << count << endl;
	}
}
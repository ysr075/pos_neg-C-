#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	string choose; int num;
	cout << "\n1.pos or 2.neg: "; cin >> choose;
	if (choose == "1" || choose == "pos") {
		cout << "num: "; cin >> num;
		do {
			cout << "\n" << num++;
		} while (true);
	} else if (choose == "2" || choose == "neg") {
		cout << "num: "; cin >> num;
		do {
			cout << "\n" << num--;
		} while (true);
	} else {
		exit(1);
	}
	return 0;
}

#include <iostream>
using namespace std;
double PowerA3(double m) {
	double n = m * m * m;
	return n;
}
int main() {
	double a, b;
	cout << "input five numbers: ";
	for (int i = 0; i < 5; i++) {
		cin >> a;
		cout << PowerA3(a) << endl;
	}
	return 0;
}
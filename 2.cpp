#include <iostream>
using namespace std;
int Sign(double x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	else {
		return -1;
	}
}
int main() {
	double a, b;
	cout << "input a, b: ";
	cin >> a >> b;
	cout << Sign(a) + Sign(b);
	return 0;
}
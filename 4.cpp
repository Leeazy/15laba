#include <iostream>
using namespace std;
int Quarter(double x, double y) {
	if (x > 0) {
		if (y > 0) {
			return 1;
		}
		if (y < 0) {
			return 4;
		}
	}
	if (x < 0) {
		if (y > 0) {
			return 2;
		}
		if (y < 0) {
			return 3;
		}
	}
}
int main() {
	double x, y;
	cout << "input x1 y1, x2 y2, x3 y3: ";
	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		cout << Quarter(x, y) << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
double RingS(double R1, double R2) {
	double ring = 3.14 * R1 * R1 - 3.14 * R2 * R2;
	return ring;
}
int main() {
	double R1, R2;
	cout << "input radius 1, radius 2, radius 3, radius 4, radius 5, radius 6: ";
	for (int i = 0; i < 6; i++) {
		cin >> R1 >> R2;
		cout << RingS(R1, R2) << endl;
	}
	return 0;
}
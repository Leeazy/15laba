#include <iostream>
using namespace std;
double Fact2(double n) {
	double n_f = 1;
	if ((int)n % 2 == 0) {
		for (int i = 2; i <= n; i += 2) {
			n_f *= i;
		}
	}
	else {
		for (int i = 1; i <= n; i += 2) {
			n_f *= i;
		}
	}
	return n_f;
}
int main() {
	double n;
	cout << "input n: ";
	cin >> n;
	cout << Fact2(n);
	return 0;
}
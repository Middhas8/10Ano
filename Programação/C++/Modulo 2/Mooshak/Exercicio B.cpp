#include <iostream>
using namespace std;
int main() {
	int A, L, C;
	cin >> A >> L >> C;
	C = A * L * C;
	if (C>=50 && A>=3) {
		cout << "1\n";
	} else {
		cout << "0\n";
	}
}
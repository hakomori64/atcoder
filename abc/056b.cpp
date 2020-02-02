#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int w, a, b;
	cin >> w >> a >> b;
	if ((b <= a + w && a <= b) || (b <= a && a <= b + w)) {
		cout << 0 << endl;
		return 0;
	}

	if (a + w < b) {
		cout << abs(b - a - w) << endl;
		return 0;
	}

	if (b + w < a) {
		cout << abs(a - b - w) << endl;
		return 0;
	}
}

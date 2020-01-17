#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a <= c && d <= b) {
		cout << d - c << endl;
		return 0;
	}

	if (c <= a && b <= d) {
		cout << b - a << endl;
		return 0;
	}

	cout << max(0, min(d - a, b - c)) << endl;
	return 0;
}

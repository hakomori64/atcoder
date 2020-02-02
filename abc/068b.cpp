#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int n;
	cin >> n;
	int num = 1;
	while (n > 0) {
		n /= 2;
		num *= 2;
	}
	cout << num / 2 << endl;
	return 0;
}

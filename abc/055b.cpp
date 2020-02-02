#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	long power = 1;

	for (int i = 1; i <= n; i++) {
		power = (power * i) % (1000000000 + 7);
	}
	cout << power << endl;
	return 0;
}

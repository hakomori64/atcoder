#include <iostream>
using namespace std;


int main() {
	long n, k, s;
	cin >> n >> k >> s;
	if (k == 0) {
		if (s == 1) {
			for (int i = 0; i < n-1; i++) cout << s + 1 << " ";
			cout << s + 1 << endl;
		} else {
			for (int i = 0; i < n-1; i++) cout << s - 1 << " ";
			cout << s - 1 << endl;
		}
		return 0;
	}


	for (long i = 0; i < k - 1; i++) cout << s << " ";
	for (long i = 0; i < n - k; i++) cout << 1 << " ";
	cout << s - (n - k) << endl;
	return 0;
}

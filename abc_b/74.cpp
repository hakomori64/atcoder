#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		sum += (num < k - num ? 2 * num : 2 * (k - num));
	}
	cout << sum << endl;
	return 0;
}

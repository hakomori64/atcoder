#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int min_count = INT_MAX;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		int count = 0;
		while (num % 2 == 0) {
			count++;
			num /= 2;
		}
		if (count < min_count) min_count = count;
	}
	cout << min_count << endl;
	return 0;
}

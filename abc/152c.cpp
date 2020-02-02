#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];

	int count = 0;
	int min_num = n + 1;
	for (int i = 0; i < n; i++) {
		if (vec[i] == 1) {
			count++;
			break;
		}

		if (vec[i] < min_num) {
			min_num = vec[i];
			count++;
		}
	}

	cout << count << endl;
	return 0;
}

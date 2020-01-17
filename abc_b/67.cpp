#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());

	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += vec[i];
	}
	cout << sum << endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<long> vec(n+1);
	vec[0] = 2;
	vec[1] = 1;

	if (n < 2) {
		cout << vec[n] << endl;
		return 0;
	}

	for (int i = 2; i < n + 1; i++) {
		vec[i] = vec[i-1] + vec[i-2];
	}

	cout << vec[n] << endl;
	return 0;
}

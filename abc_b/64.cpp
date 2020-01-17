#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	cout << vec[vec.size()-1] - vec[0] << endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		vec[i] = make_pair(a, b);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size() - 1; i++) {
		if (vec[i].first + vec[i].second > vec[i+1].first - vec[i+1].second) {
			if (i < vec.size()-2 && vec[i+1].first + vec[i+1].second > vec[i+2].first - vec[i+2].second) vec.erase(vec.begin()+i+1);
			else {
				vec.erase(vec.begin()+i);
				i--;	
			}
		}
	}
	cout << vec.size() << endl;
	return 0;
}

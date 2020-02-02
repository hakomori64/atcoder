#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> vec(m);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[i] = make_pair(a, b);
	}

	for (int t = 1; t <= n; t++) {
		int count = 0;
		for (auto road : vec) {
			if (road.first == t || road.second == t) count++;
		}
		cout << count << endl;
	
	}
}

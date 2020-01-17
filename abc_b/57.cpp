#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int calc_dist(int x1, int y1, int x2, int y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> stu(n);
	vector<pair<int, int>> points(m);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		stu[i] = make_pair(a, b);
	}
	for (int i = 0; i < m; i++) {
		int c, d;
		cin >> c >> d;
		points[i] = make_pair(c, d);
	}

	for (int i = 0; i < n; i++) {
		int min_dist = INT_MAX;
		int index = -1;
		for (int j = 0; j < m; j++) {
			int dist = calc_dist(stu[i].first, stu[i].second, points[j].first, points[j].second);
			if (dist < min_dist) {
				min_dist = dist;
				index = j + 1;
			}
		}
		cout << index << endl;
	}
	return 0;
}

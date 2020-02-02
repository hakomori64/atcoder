#include <iostream>
#include <vector>
using namespace std;


int main() {
	int h, w;
	cin >> h >> w;
	vector<string> vec(h);
	for (int i = 0; i < h; i++) cin >> vec[i];
	vec.insert(vec.begin(), string(w+2, '#'));
	vec.push_back(string(w+2, '#'));

	for (int i = 1; i < h+1; i++) {
		vec[i].insert(vec[i].begin(), '#');
		vec[i].push_back('#');
	}

	for (int i = 0; i < h+2; i++) {
		cout << vec[i] << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;


int check_around(int i, int j, int h, int w, vector<string>& vec) {
	bool hz = i > 0;
	bool hh = i < h - 1;
	bool wz = j > 0;
	bool ww = j < w - 1;

	int count = 0;
	if (hz) count += (vec[i-1][j] == '#' ? 1 : 0);
	if (hh) count += (vec[i+1][j] == '#' ? 1 : 0);
	if (wz) count += (vec[i][j-1] == '#' ? 1 : 0);
	if (ww) count += (vec[i][j+1] == '#' ? 1 : 0);
	if (hz&&wz) count += (vec[i-1][j-1] == '#' ? 1 : 0);
	if (hz&&ww) count += (vec[i-1][j+1] == '#' ? 1 : 0);
	if (hh&&wz) count += (vec[i+1][j-1] == '#' ? 1 : 0);
	if (hh&&ww) count += (vec[i+1][j+1] == '#' ? 1 : 0);
	
	return count;
}

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> vec(h);
	for(int i = 0; i < h; i++) cin >> vec[i];

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (vec[i][j] == '.') {
				cout << check_around(i, j, h, w, vec);
			} else {
				cout << vec[i][j];
			}
		}
		cout << endl;
	}
}

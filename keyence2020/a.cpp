#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int h, w;
	cin >> h >> w;
	int n;
	cin >> n;
	int l = max(h, w);
	cout << (n + (l - 1)) / l << endl;
	return 0;
}

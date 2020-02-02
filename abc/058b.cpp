#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string o, e;
	cin >> o >> e;
	reverse(o.begin(), o.end());
	reverse(e.begin(), e.end());
	while (o.size() || e.size()) {
		if (o.size()) {
			cout << o[o.size()-1];
			o.pop_back();
		}
		if (e.size()) {
			cout << e[e.size()-1];
			e.pop_back();
		}
	}
	return 0;
}

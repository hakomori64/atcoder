#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
	long n;
	cin >> n;
	map<long, long> mp;
	for (int i = 0; i < n; i++) {
		long a, b;
		cin >> a >> b;
		mp[a] = b;
	}

	for (auto it = mp.begin(); (++it) != mp.end(); it++) {
		--it;
		pair<long, long> current = *it, nxt = *(++it);
		--it;
		if (current.first + current.second > nxt.first - nxt.second) {
			++it; ++it;
			if (it != mp.end()) {
				auto anxt = *it;
				--it; --it;
				if (nxt.first + nxt.second > anxt.first - anxt.second) {
					mp.erase((++it));
					it--;
					
				}
			}else {
				--it; --it;
				mp.erase(it);
				--it;
			}
		}
	}
	cout << mp.size() << endl;
	return 0;
}

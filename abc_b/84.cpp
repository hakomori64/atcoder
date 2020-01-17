#include <iostream>
#include <string>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	if (s.size() != a + b + 1) {
		cout << "No" << endl;
		return 0;
	}

	if (s.at(a) != '-') {
		cout << "No" << endl;
		return 0;
	}

	for (int i = 0; i < s.size(); i++) {
		if (i == a) continue;
		if (s.at(i) >= '0' && s.at(i) <= '9') continue;
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;
	return 0;

}

#include <iostream>
#include <string>
using namespace std;


int main() {
	int n, a, b;
	cin >> n >> a >> b;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		int sum_num = 0;
		for (int j = 0; j < s.size(); j++) {
			sum_num += s.at(j) - '0';
		}
		if (a <= sum_num && sum_num <= b) sum += i;
	}

	cout << sum << endl;
	return 0;
}

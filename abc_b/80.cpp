#include <iostream>
#include <string>
using namespace std;

int main() {
	long n;
	cin >> n;
	string num = to_string(n);
	int harshad = 0;
	for (auto elem : num) {
		harshad += elem - '0';
	}

	if (n % harshad == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

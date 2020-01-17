#include <iostream>
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;
	int current = 1;
	for (int i = 0; i < n; i++) {
		current = (current * 2 < current + k ? current * 2 : current + k); 
	}
	cout << current << endl;
	return 0;
}

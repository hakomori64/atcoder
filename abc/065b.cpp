#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	vector<int> visited(n, 0);

	int current = 0, count = 0;
	while (visited[current] == 0 && vec[current] != 2) {
		count++;
		visited[current] = 1;
		current = vec[current] - 1;
	}

	if (vec[current] == 2) cout << count + 1 << endl;
	else cout << -1 << endl;
	return 0;
	
	
}

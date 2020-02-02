#include <iostream>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int a = 1; a <= n; a++) {
		for (int b = 1; b <= n; b++) {
			string aa = to_string(a);
			string bb = to_string(b);
			if (aa[0] == bb[bb.size()-1] && aa[aa.size()-1] == bb[0]) {
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}

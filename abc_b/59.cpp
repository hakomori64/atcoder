#include <iostream>
using namespace std;


int main() {
	string a, b;
	cin >> a >> b;
	if (a.size() < b.size()) cout << "LESS" << endl;
	else if  (a.size() > b.size()) cout << "GREATER" << endl;
	else {
		if (a < b) cout << "LESS" << endl;
		else if (a > b) cout << "GREATER" << endl;
		else cout << "EQUAL" << endl;
	}
	return 0;
}

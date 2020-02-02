#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	s.pop_back();
	while (s.size() % 2 == 1 || s.substr(0, s.size() / 2) != s.substr(s.size() / 2, s.size() / 2)) s.pop_back();
	cout << s.size() << endl;
	return 0;
}

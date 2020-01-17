#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	string s;
	cin >> s;
	set<char> st(s.begin(), s.end());

	char c = 'a';
	while (find(st.begin(), st.end(), c) != st.end()) {
		c++;
	}
	
	if ('a' <= c && c <= 'z') cout << c << endl;
	else cout << "None" << endl;
	return 0;
}

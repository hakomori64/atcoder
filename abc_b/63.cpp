#include <iostream>
#include <set>
using namespace std;


int main() {
	string s;
	cin >> s;
	set<char> st(s.begin(), s.end());
	if (s.size() == st.size()) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> st(s.begin(), s.end());
    if (st.size() == 2 && count(s.begin(), s.end(), s.at(0)) == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

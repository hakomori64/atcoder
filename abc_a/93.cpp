#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> ss(s.begin(), s.end());
    cout << (s.size() == ss.size() ? "Yes" : "No") << endl;
    return 0;
}

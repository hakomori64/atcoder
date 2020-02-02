#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int max_count = 0;
    for (int i = 0; i < n; i++) {
        set<char> x(s.begin(), s.begin()+i+1);
        set<char> y(s.begin()+i+1, s.end());

        int _count = 0;
        string kinds = "";
        for (char c : x) {
            if (count(y.begin(), y.end(), c) > 0 && count(kinds.begin(), kinds.end(), c) == 0) {
                _count++;
                kinds.push_back(c);
            }
        }
        if (max_count < _count) max_count = _count;
    }
    cout << max_count << endl;
    return 0;
}

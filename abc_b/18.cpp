#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        string sub_str = s.substr(l-1, r - l + 1);
        reverse(sub_str.begin(), sub_str.end());
        s.replace(l-1, r - l + 1, sub_str);
    }
    cout << s << endl;
    return 0;
}

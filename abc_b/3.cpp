#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string replace_str = "atcoder";
    for (int i = 0; i < s1.size(); i++) {
        if (
            s1.at(i) == s2.at(i) ||
            (s1.at(i) == '@' && count(replace_str.begin(), replace_str.end(), s2.at(i))) ||
            (s2.at(i) == '@' && count(replace_str.begin(), replace_str.end(), s1.at(i)))
            ) {
            continue;
        } else {
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
    return 0;
}

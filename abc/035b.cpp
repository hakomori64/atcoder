#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int x = count(s.begin(), s.end(), 'R') - count(s.begin(), s.end(), 'L');
    int y = count(s.begin(), s.end(), 'U') - count(s.begin(), s.end(), 'D');
    int q = count(s.begin(), s.end(), '?');
    int kind;
    cin >> kind;
    if (kind == 1) {
        if (x >= 0) x += q;
        else x -= q;
        cout << abs(x) + abs(y) << endl;
    } else {
        if (abs(x) + abs(y) >= q) {
            cout << abs(x) + abs(y) - q << endl;
            return 0;
        } else {
            cout << (q - abs(x) - abs(y)) % 2 << endl;
            return 0;
        }
    }
}

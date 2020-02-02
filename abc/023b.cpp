#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (
            count(s.begin(), s.end(), 'a') + count(s.begin(), s.end(), 'b') + count(s.begin(), s.end(), 'c') != s.size() ||
            s.size() % 2 == 0
       ) {
        cout << -1 << endl;
        return 0;
    }

    int count = -1;
    int sum = 0;
    while (true) {
        if (s.size() == 1) {
            if (s.at(0) == 'b') {
                cout << sum << endl;
                return 0;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }
        if (s.at(0) == 'a' && s.at(s.size()-1) == 'c') {
            s.erase(s.begin());
            s.pop_back();
            if (count == -1 || count == 2) {
                count = 1;
                sum++;
                continue;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }

        if (s.at(0) == 'c' && s.at(s.size()-1) == 'a') {
            s.erase(s.begin());
            s.pop_back();
            if (count == -1 || count == 3) {
                count = 2;
                sum++;
                continue;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }

        if (s.at(0) == 'b' && s.at(s.size()-1) == 'b') {
            s.erase(s.begin());
            s.pop_back();
            if (count == -1 || count == 1) {
                count = 3;
                sum++;
                continue;
            } else {
                cout << -1 << endl;
                return 0;
            }
        }

        cout << -1 << endl;
        return 0;
    }
}

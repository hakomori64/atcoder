#include <iostream>
using namespace std;


int main() {
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        char c = s.at(0);
        s.erase(s.begin());
        s.push_back(c);
    }
    cout << "No" << endl;
    return 0;
}

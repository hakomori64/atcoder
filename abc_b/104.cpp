#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    if (s.at(0) != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    if (count(s.begin()+2, s.end()-1, 'C') != 1) {
        cout << "WA" << endl;
        return 0;
    }

    string::iterator c_it = find(s.begin()+2, s.end()-1, 'C');

    for (string::iterator it = s.begin()+1; it != s.end(); it++) {
        if (it == c_it) continue;
        if ('A' <= *it && *it <= 'Z') {
            cout << "WA" << endl;
            return 0;
        } 
    }
    cout << "AC" << endl;
    return 0;
}

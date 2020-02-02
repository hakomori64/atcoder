#include <iostream>
#include <string>
#include <set>
using namespace std;


int main() {
    string s;
    int k;
    cin >> s >> k;
    if (s.size() < k) {
        cout << 0 << endl;
        return 0;
    }
    set<string> kind;
    for (int i = 0; i < s.size() - k + 1; i++) {
        kind.insert(s.substr(i, k));
    }

    cout << kind.size() << endl;
    return 0;
}

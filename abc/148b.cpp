#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++) {
        cout << s.at(i) << t.at(i);
    }
    cout << endl;
    return 0;
}

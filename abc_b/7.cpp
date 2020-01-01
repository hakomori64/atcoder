#include <iostream>
using namespace std;


int main() {
    string s;
    cin >> s;
    char ans = 'a';
    if (s.size() == 1 && s.at(0) == 'a'){
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}

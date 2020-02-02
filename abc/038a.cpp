#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.at(s.size()-1) == 'T') cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}

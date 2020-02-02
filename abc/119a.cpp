#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '/'), s.end());
    string last_heisei = "20190430";
    cout << (s <= last_heisei ? "Heisei" : "TBD") << endl;
    return 0;
}

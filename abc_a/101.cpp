#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << count(s.begin(), s.end(), '+') - count(s.begin(), s.end(), '-') << endl;
    return 0;
}

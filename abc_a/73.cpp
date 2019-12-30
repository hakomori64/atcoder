#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    cout << (count(s.begin(), s.end(), '9') ? "Yes" : "No") << endl;
    return 0;
}

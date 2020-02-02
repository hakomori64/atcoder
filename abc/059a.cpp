#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    cout << (char)toupper(a.at(0)) << (char)toupper(b.at(0)) << (char)toupper(c.at(0)) << endl;
    return 0;
}

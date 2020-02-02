#include <iostream>
#include <string>
using namespace std;


int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << stoi(s1 + s2) * 2 << endl;
    return 0;
}

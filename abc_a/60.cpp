#include <iostream>
using namespace std;


int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1.at(s1.size()-1) == s2.at(0) && s2.at(s2.size()-1) == s3.at(0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

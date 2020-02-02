#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s.at(i) = tolower(s.at(i));
    }
    s.at(0) = toupper(s.at(0));
    cout << s << endl;
}

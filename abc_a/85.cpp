#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    s.replace(0, 4, "2018");
    cout << s << endl;
}

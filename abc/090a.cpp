#include <iostream>
using namespace std;


int main() {
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        cout << s.at(i);
    }
    cout << endl;
    return 0;
}

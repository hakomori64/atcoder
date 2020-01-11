#include <iostream>
using namespace std;


int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        char c = (((s.at(i) - 'A') + n) % 26) + 'A';
        cout << c;
    }
    cout << endl;
    return 0;
}

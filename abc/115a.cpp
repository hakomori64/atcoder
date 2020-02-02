#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;
    string s = "Christmas";
    for (int i = 0; i < 25 - d; i++) {
        s += " Eve";
    }
    cout << s << endl;
    return 0;
}

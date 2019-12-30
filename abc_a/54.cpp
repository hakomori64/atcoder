#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "Draw" << endl;
        return 0;
    }

    if (a == 1) {
        cout << "Alice" << endl;
        return 0;
    }
    if (b == 1) {
        cout << "Bob" << endl;
        return 0;
    }

    if (a > b) {
        cout << "Alice" << endl;
        return 0;
    }

    if (a < b) {
        cout << "Bob" << endl;
        return 0;
    }
}

#include <iostream>
using namespace std;

int main() {
    char a, b;
    bool ab, bb;
    cin >> a >> b;

    ab = (a == 'H');
    bb = (b == 'H');

    if (!(ab^bb)) {
        cout << 'H' << endl;
    } else {
        cout << 'D' << endl;
    }
    return 0;
}

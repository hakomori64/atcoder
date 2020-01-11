#include <iostream>
using namespace std;


int main() {
    int k, x;
    cin >> k >> x;
    int minimum = max(-1000000, x - k + 1);
    int maximum = min(1000000, x + k - 1);
    for (int i = minimum; i <= maximum; i++) {
        cout << i;
        if (i != maximum) cout << " ";
        else cout << endl;
    }
    return 0;
}

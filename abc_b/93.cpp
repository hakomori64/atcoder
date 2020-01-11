#include <iostream>
using namespace std;


int main() {
    int a, b, k;
    cin >> a >> b >> k;
    if (b - a + 1 < 2 * k) {
        for (int i = a; i <= b; i++) cout << i << endl;
        return 0;
    }
    for (int i = a; i < a + k; i++) cout << i << endl;
    for (int i = b - k + 1; i <= b; i++) cout << i << endl;
    return 0;
}

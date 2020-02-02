#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2) {
        cout << (double)((n / 2) + 1) / n << endl;
    } else {
        cout << (double)1 / 2 << endl;
    }
    return 0;
}

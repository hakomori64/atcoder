#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 111 == 0) {
        cout << n << endl;
        return 0;
    }

    cout << (n / 111 + 1) * 111 << endl;
    return 0;
}

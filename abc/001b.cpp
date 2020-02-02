#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    double m;
    cin >> m;
    m = m / 1000;
    if (m < 0.1) {
        cout << "00" << endl;
    } else if (m <= 5) {
        printf("%02d\n", (int)(m * 10));
    } else if (6 <= m && m <= 30) {
        cout << m + 50 << endl;
    } else if (35 <= m && m <= 70) {
        cout << (m - 30) / 5 + 80 << endl;
    } else if (70 < m) {
        cout << 89 << endl;
    }
    return 0;
}

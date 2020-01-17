#include <iostream>
using namespace std;


int main() {
    int _a, _b, _c, x;
    cin >> _a >> _b >> _c >> x;
    int value = 0;
    int count = 0;
    for (int a = 0; a <= _a; a++) {
        value = a * 500;
        if (value > x) break;
        for (int b = 0; b <= _b; b++) {
            value = a * 500 + b * 100;
            if (value > x) break;
            int m_x = (x - value) / 50;
            if (m_x <= _c) count++;
        }
    }
    cout << count << endl;
    return 0;
}

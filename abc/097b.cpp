#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int x;
    cin >> x;
    if (x < 4) {
        cout << 1 << endl;
        return 0;
    }

    int cand = 4;
    int b = 2, p = 2;
    while (pow(b, p) <= x) {
        while (pow(b, p) <= x) {
            int n = pow(b, p);
            if (n > cand) cand = n;
            p++;
        }
        p = 2;
        b++;
    }
    cout << cand << endl;
    return 0;
}

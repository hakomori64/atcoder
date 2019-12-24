#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int x = a * b;
    int tmp;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    int l = x / b;
    tmp = l;
    while (tmp < n) {
        tmp += l;
    }
    cout << tmp << endl;
    return 0;
}

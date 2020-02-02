#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a, b, k;
    cin >> a >> b >> k;
    if (a >= k) {
        cout << a - k << " " << b << endl;
    } else {
        cout << 0 << " " << max((long long int)0, b - k + a) << endl;
    }
}

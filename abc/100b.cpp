#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;


int main() {
    int d, n;
    cin >> d >> n;
    int ans = pow(100, d) * n;
    if (n == 100) ans += pow(100, d);
    cout << ans << endl;
    return 0;
}

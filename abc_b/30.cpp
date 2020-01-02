#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    cout << min(abs(30 * (n % 12) + 0.5 * m - 6 * m), 360 - abs(30 * (n % 12) + 0.5 * m - 6 * m)) << endl;
    return 0;
}

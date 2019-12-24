#include <iostream>
using namespace std;

int main() {
    int a, b, c, k;
    int s, t;
    cin >> a >> b >> c >> k;
    cin >> s >> t;

    long price = 0;
    price += a * s + b * t;
    if (k <= (s + t)) price -= c * (s + t);
    cout << price << endl;
    return 0;
}

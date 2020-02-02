#include <iostream>
using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int price;
    if (k < n) {
        price = x * k + y * (n - k);
    } else {
        price = x * n;
    }
    cout << price << endl;
    return 0;
}

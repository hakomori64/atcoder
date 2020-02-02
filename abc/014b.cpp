#include <iostream>
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    int sum_value = 0;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        sum_value += value * (x % 2);
        x >>= 1;
    }

    cout << sum_value << endl;
}

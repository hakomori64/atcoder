#include <iostream>
using namespace std;


int main() {
    int n, d, x;
    cin >> n >> d >> x;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        sum += 1 + (d - 1) / ai;
    }
    cout << sum  + x << endl;
}

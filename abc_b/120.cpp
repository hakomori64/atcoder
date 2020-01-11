#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int count = 1;
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            if (count == k) {
                cout << i << endl;
                return 0;
            } else count++;
        }
    }
}

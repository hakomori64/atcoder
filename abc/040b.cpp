#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;


int main() {
    int n;
    cin >> n;
    int min_sum = INT_MAX;

    for (int i = 1; i < (int)sqrt(n) + 1; i++) {
        int sum = abs(i - n / i) + (n % i);
        if (sum < min_sum) min_sum = sum;
    }
    cout << min_sum << endl;
    return 0;
}

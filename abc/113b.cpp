#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t, a;
    cin >> t >> a;
    double min_diff = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        double tmp = t - 0.006 * h;
        double diff = abs(tmp - a);
        if (diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    cout << index + 1 << endl;
    return 0;
}

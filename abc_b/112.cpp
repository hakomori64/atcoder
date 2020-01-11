#include <iostream>
#include <climits>
using namespace std;


int main() {
    int n, t;
    cin >> n >> t;
    int min_cost = INT_MAX;
    for (int i = 0; i < n; i++) {
        int c, _t;
        cin >> c >> _t;
        if (_t <= t && c < min_cost) {
            min_cost = c;
        }
    }
    if (min_cost == INT_MAX) cout << "TLE" << endl;
    else cout << min_cost << endl;
    return 0;
}

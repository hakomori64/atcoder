#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    long sum_right = accumulate(vec.begin(), vec.end(), 0);
    long sum_left = 0;
    long min_diff = INT_MAX;

    for (int i = 0; i < n; i++) {
        sum_left += vec.at(i);
        sum_right -= vec.at(i);
        long diff = abs(sum_left - sum_right);
        if (diff < min_diff) min_diff = diff;
    }
    cout << min_diff << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int a_sum = 0, b_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums.at(i);
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) a_sum += nums.at(i);
        else b_sum += nums.at(i);
    }

    cout << abs(a_sum - b_sum) << endl;
    return 0;
}

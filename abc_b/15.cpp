#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    int param = n - count(vec.begin(), vec.end(), 0);
    cout << (accumulate(vec.begin(), vec.end(), 0) + (param - 1)) / param;
}

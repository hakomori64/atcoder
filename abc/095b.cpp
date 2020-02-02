#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec.at(i);
    cout << (x - accumulate(vec.begin(), vec.end(), 0)) / *min_element(vec.begin(), vec.end()) + n << endl;
    return 0;
}

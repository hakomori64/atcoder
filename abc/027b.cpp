#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    if (accumulate(vec.begin(), vec.end(), 0) % n != 0) {
        cout << -1 << endl;
        return 0;
    }

    int average = accumulate(vec.begin(), vec.end(), 0) / n;
    vector<int> acc(n);
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        tmp += vec.at(i);
        acc.at(i) = tmp;
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        if (acc.at(i) != (i+1) * average) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

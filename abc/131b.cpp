#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main() {
    int n, l;
    cin >> n >> l;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        vec.at(i) = l + i;
    }

    if (l >= 0) {
        cout << accumulate(vec.begin(), vec.end(), 0) - vec.at(0) << endl;
        return 0;
    }

    if (l + n - 1 >= 0) {
        cout << accumulate(vec.begin(), vec.end(), 0) << endl;
        return 0;
    } 

    cout << accumulate(vec.begin(), vec.end(), 0) - vec.at(vec.size()-1) << endl;
    return 0;
}

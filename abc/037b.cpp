#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for (int i = 0; i < q; i++) {
        int l, r, t;
        cin >> l >> r >> t;
        fill(vec.begin() + l - 1, vec.begin() + r, t);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
    return 0;
}

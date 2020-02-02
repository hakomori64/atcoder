#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> value(n), cost(n);
    for (int i = 0; i < n; i++) {
        cin >> value.at(i);
    }

    for (int i = 0; i < n; i++) {
        cin >> cost.at(i);
    }

    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += max(0, value.at(i) - cost.at(i));
    }

    cout << sum << endl;
}

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int low, high;
    cin >> low >> high;
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }
    for (int i = 0; i < n; i++) {
        if (vec.at(i) <= high) {
            cout << max(0, low - vec.at(i)) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

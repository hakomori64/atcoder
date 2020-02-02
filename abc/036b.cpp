#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    vector<string> new_vec(n, string(n, '.'));
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            new_vec.at(x).at(n - 1 - y) = vec.at(y).at(x);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << new_vec.at(i) << endl;
    }
    return 0;
}

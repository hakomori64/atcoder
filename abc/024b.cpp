#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, t;
    cin >> n >> t;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            count += t;
            break;
        }

        count += min(t, vec.at(i+1) - vec.at(i));
    }

    cout << count << endl;
    return 0;
}

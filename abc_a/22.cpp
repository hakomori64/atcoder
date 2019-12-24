#include <iostream>
using namespace std;

int main() {
    int n, s, t, w;
    cin >> n >> s >> t >> w;

    int count = 0, tmp;
    if (s <= w && w <= t) count++;
    for(int i = 1; i < n; i++) {
        cin >> tmp;
        w += tmp;
        if (s <= w && w <= t) count++;
    }
    cout << count << endl;
    return 0;
}

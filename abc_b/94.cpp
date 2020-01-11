#include <iostream>
using namespace std;


int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int count = 0;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (num < x) count++;
    }
    cout << (count < m - count ? count : m - count) << endl;
    return 0;

}

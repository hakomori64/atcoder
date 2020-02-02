#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (i != num) count++;
    }

    if (count == 0 || count == 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

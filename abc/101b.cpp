#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    int sn;
    cin >> n;
    int k = n;
    while (k > 0) {
        sn += k % 10;
        k /= 10;
    }

    if (n % sn == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

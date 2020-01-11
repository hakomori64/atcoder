#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++) {
        if (n % i == 0) {
            int j = n / i;
            if (1 <= j && j <= 9) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

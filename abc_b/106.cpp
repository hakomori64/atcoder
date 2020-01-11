#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin >> n;
    int count = 0;
    if (n < 16) {
        cout << 0 << endl;
        return 0;
    }
    
    for (int i = 17; i <= n; i+=2) {
        int _count = 2;
        for (int j = 2; j < sqrt(i) + 1; j++) {
            if (i % j == 0) _count+=2;
        }

        if (_count == 8) {
            count++;
        }    
    }
    cout << count << endl;
    return 0;
}

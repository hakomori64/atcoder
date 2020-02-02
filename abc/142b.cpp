#include <iostream>
using namespace std;


int main() {
    int n, k;
    int count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;
        if (height >= k) count++;
    }
    cout << count << endl;
    return 0;
}

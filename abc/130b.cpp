#include <iostream>
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    int count = 1;
    int dist = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        dist += num;
        if (dist <= x) count++;
    }
    cout << count << endl;
    return 0;
}

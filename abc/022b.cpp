#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> nd(100000);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (nd[k] == 1) count++;
        else nd[k] = 1;
    }
    cout << count << endl;
    return 0;
}

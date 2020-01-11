#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        string si = to_string(i);
        if (si.size() % 2) count++;
    }
    cout << count << endl;
    return 0;
}

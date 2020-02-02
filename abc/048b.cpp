#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    cout << (b / x) - (max((long long)0, a - 1)) / x + (a == 0) << endl;
    return 0;
}

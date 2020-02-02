#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int k = (a + b) / 2;
    if (ceil((double)(a + b) / 2) == floor((double)(a + b) / 2)) {
        cout << k << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}

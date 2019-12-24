#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a - b < b - 1 ? a - b : b - 1) << endl;
    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (max(0, a - b)) << endl;
    return 0;
}
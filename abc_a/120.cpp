#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (b / a < c ? b / a : c) << endl;
    return 0;
}

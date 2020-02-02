#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (min(a, b) * 2 + abs(a - b) * 2 <= 16 ? "Yay!" : ":(") << endl;
    return 0;
}

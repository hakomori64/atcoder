#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n % 2 == 0 ? n : n * 2) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    cout << (a - (n % a)) % a << endl;
    return 0;
}

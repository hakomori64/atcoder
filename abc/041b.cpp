#include <iostream>
using namespace std;


int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << ((a * b % ((long long)1e9 + 7)) * c) % ((long long)1e9 + 7) << endl;
    return 0;

}

#include <iostream>
#include <string>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    cout << (a + b >= 10 ? "error" : to_string(a + b)) << endl;
    return 0;
}

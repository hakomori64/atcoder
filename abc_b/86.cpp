#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    string a, b;
    cin >> a >> b;
    double num = stoi(a + b);
    num = sqrt(num);
    if (num == (int)num) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

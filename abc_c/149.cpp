#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i < (int)sqrt(num) + 1; i+=2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    int num = x;
    if (is_prime(num)) {
        cout << num << endl;
        return 0;
    }
    if (num % 2 == 0) num++;
    while (!is_prime(num)) num += 2;
    cout << num << endl;
    return 0;
}

#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    double rev_sum = 0;
    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        rev_sum += 1 / num;
    }
    cout << 1 / rev_sum << endl;
    return 0;
}

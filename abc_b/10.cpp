#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int nop = 0;
    for (int i = 0; i < n; i++) {
        int flower;
        cin >> flower;
        while (flower % 2 == 0 || flower % 3 == 2) {
            flower--;
            nop++;
        }
    }
    cout << nop << endl;
    return 0;
}

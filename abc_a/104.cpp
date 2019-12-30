#include <iostream>
using namespace std;


int main() {
    int num;
    cin >> num;
    if (num < 1200) {
        cout << "ABC" << endl;
    } else if (num < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
    return 0;
}

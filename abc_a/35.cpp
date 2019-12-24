#include <iostream>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;
    if (h * 4 == w * 3) cout << "4:3" << endl;
    else if (h * 16 == w * 9) cout << "16:9" << endl;
    return 0;
}

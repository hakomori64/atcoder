#include <iostream>
#include <vector>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> vec(h);
    for (int i = 0; i < h; i++) {
        cin >> vec.at(i);
    }

    for (int i = 0; i < 2 * h; i++) {
        cout << vec.at(i / 2) << endl;
    }
    return 0;
}

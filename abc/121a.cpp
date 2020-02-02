#include <iostream>
using namespace std;

int main() {
    int H, W;
    int h, w;
    cin >> H >> W >> h >> w;
    cout << (H - h) * (W - w) << endl;
    return 0;
}

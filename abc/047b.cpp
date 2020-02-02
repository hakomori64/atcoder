#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int left = 0, right = w, top = h, bottom = 0;
    for (int i = 0; i < n; i++) {
        int x, y, a;
        cin >> x >> y >> a;

        switch (a) {
            case 1:
                if (left < x) left = x;
                break;
            case 2:
                if (x < right) right = x;
                break;
            case 3:
                if (bottom < y) bottom = y;
                break;
            case 4:
                if (y < top) top = y;
                break;
        }

    }
    if (top >= bottom && right >= left) {
        cout << (top - bottom) * (right - left) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, a, b;
    int distance = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        string s;
        int d;
        cin >> s >> d;

        if (s == "East") {
            distance += max(a, min(b, d));
        } else {
            distance -= max(a, min(b, d));
        }
    }

    if (distance > 0) {
        cout << "East " << distance << endl;
    } else if (distance < 0) {
        cout << "West " << distance * -1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}

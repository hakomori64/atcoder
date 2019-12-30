#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> g1{1, 3, 5, 7, 8, 10, 12};
    vector<int> g2{4, 6, 9, 11};
    
    int x, y;
    cin >> x >> y;
    if (
        (
         count(g1.begin(), g1.end(), x) > 0 &&
         count(g1.begin(), g1.end(), y) > 0
        ) ||
        (
         count(g2.begin(), g2.end(), x) > 0 &&
         count(g2.begin(), g2.end(), y) > 0
        )
    ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

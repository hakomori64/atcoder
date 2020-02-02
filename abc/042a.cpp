#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec(3);
    for (int i = 0; i < 3; i++) cin >> vec.at(i);
    sort(vec.begin(), vec.end());
    if (vec[0] == vec[1] && vec[0] == 5 && vec[2] == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

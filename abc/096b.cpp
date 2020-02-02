#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec(3);
    for (int i = 0; i < 3; i++) cin >> vec.at(i);
    int k;
    cin >> k;
    sort(vec.begin(), vec.end());
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        int num = vec.at(i);
        if (i == 2) {
            for (int j = 0; j < k; j++) {
                num *= 2;
            }
        }
        sum += num;
    }
    cout << sum << endl;
    return 0;
}

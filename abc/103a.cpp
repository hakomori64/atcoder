#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(3);
    for (int i = 0; i < vec.size(); i++) {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    cout << vec[2] - vec[0] << endl;
    return 0;
}

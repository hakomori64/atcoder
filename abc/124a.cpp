#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> vec{a + a - 1, a + b, b + b - 1};
    cout << *max_element(vec.begin(), vec.end()) << endl;
    return 0;
}

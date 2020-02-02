#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> vec{a + b, a - b, a * b};
    cout << *max_element(vec.begin(), vec.end());
    return 0;
}

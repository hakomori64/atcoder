#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vec{a + b, b + c, c + a};
    cout << *min_element(vec.begin(), vec.end()) << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    cout << *max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end()) << endl;
    return 0;
}

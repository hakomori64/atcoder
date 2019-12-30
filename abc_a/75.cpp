#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec(3);
    for (int i = 0; i < 3; i++) {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());

    if (vec.at(0) == vec.at(1)) cout << vec.at(2) << endl;
    else cout << vec.at(0) << endl;
    return 0;
}

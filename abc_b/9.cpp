#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    set<int> values;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        values.insert(v);
    }
    
    vector<int> vec(values.begin(), values.end());
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    cout << vec.at(1) << endl;
    return 0;

}

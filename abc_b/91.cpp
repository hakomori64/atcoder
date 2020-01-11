#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;
#include <algorithm>


int main() {
    int n;
    cin >> n;
    vector<string> blues(n);
    for (int i = 0; i < n; i++) cin >> blues.at(i);
    set<string> kinds(blues.begin(), blues.end());
    int m;
    cin >> m;
    vector<string> reds(m);
    for (int i = 0; i < m; i++) cin >> reds.at(i);

    int sum = INT_MIN;
    for (auto elem : kinds) {
        int num = count(blues.begin(), blues.end(), elem) - count(reds.begin(), reds.end(), elem);
        if (sum < num) sum = num;
    }
    cout << max(0, sum) << endl;
    return 0;
}

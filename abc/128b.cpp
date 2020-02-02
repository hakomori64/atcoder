#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    map<string, vector<int>> mp;
    vector<int> scores;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int k;
        cin >> s >> k;
        scores.push_back(k);
        mp[s].push_back(k);
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        auto vec = mp[it->first];
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        for (auto elem : vec) {
            cout << find(scores.begin(), scores.end(), elem) - scores.begin() + 1 << endl;
        }
    }
    return 0;

}

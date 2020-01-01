#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <functional>
#include <iterator>
using namespace std;

bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second > b.second);
}

int main() {
    map<string, int> vote;
    vector<pair<string, int>> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (!vote.insert(make_pair(s, 1)).second) {
            vote[s]++;
        }
    }

    map<string, int>::iterator it;
    for (it=vote.begin(); it!=vote.end(); it++) {
        vec.push_back(make_pair(it->first, it->second));
    }

    sort(vec.begin(), vec.end(), sortByVal);
    cout << vec.at(0).first << endl;
    return 0;
}


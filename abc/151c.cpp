#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vec(n, make_pair(0, 0));
    REP(i, m) {
        int index;
        string judge;
        cin >> index >> judge;
        if (vec[index-1].first == 1) continue;
        if (judge == "AC") vec[index-1].first = 1;
        else vec[index-1].second++;
    }

    int cor_count = 0, penalty = 0;
    for (auto elem : vec) {
        cor_count += elem.first;
        penalty += elem.second * elem.first;
    }

    cout << cor_count << " " << penalty << endl;
    return 0;
}
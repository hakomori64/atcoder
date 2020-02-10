#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    map<ll, ll> mp;
    ll n, m; cin >> n >> m;
    REP(i, n) {
        ll key, value; cin >> key >> value;
        mp[key] += value;
    }

    ll tvalue = 0;
    ll left = m;
    for (auto elem : mp) {
        ll value = elem.first, count = elem.second;
        tvalue += value * min(left, count);
        left -= min(left, count);
        if (left == 0) {
            cout << tvalue << endl;
            return 0;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n; cin >> n;
    map<ll, ll> mp;
    REP(i, n) {
        ll num;
        cin >> num;
        mp[num] = i;
    }

    for (auto elem : mp) {
        cout << elem.second + 1 << " ";
    }
    cout << endl;
    return 0;
}
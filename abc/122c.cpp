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
    ll n, q; cin >> n >> q;
    string s; cin >> s;
    vector<pair<ll, ll>> vec(q);
    REP(i, q) {
        ll l, r; cin >> l >> r;
        vec[i] = make_pair(l, r);
    }

    vector<ll> t(n+1);
    REP(i, n) {
        t[i+1] = t[i] + (s.substr(i, 2) == "AC" ? 1 : 0);
    }

    REP(i, q) {
        ll l = vec[i].first, r = vec[i].second;
        cout << t[r-1] - t[l-1] << endl;
    }
    return 0;
}
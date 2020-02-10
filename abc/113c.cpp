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
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> pref_year(m);
    vector<ll> yearPref[n+1];
    REP(i, m) {
        ll p, y; cin >> p >> y;
        pref_year[i] = make_pair(p, y);
        yearPref[p].push_back(y);
    }
    REP(i, n+1) sort(ALL(yearPref[i]));
    REP(i, m) {
        ll pref = pref_year[i].first;
        ll year = pref_year[i].second;
        ll num = lower_bound(ALL(yearPref[pref]), year) - yearPref[pref].begin() + 1;
        cout << setw(6) << setfill('0') << pref << setw(6) << setfill('0') << num << endl;
    }
    return 0;
}
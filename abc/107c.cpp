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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    REP(i, n) cin >> v[i];
    ll min_dist = INF;
    REP(i, n - k + 1) {
        ll minv = v[i];
        ll maxv = v[i+k-1];
        ll dist = maxv - minv;
        dist += min(abs(minv), abs(maxv));
        min_dist = min(min_dist, dist);
    }
    cout << min_dist << endl;
    return 0;
}
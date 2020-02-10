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
    vector<ll> h(n);
    REP(i, n) cin >> h[i];
    sort(ALL(h));
    ll min_num = INF;
    REP(i, n - k + 1) {
        ll num = h[i+k-1] - h[i];
        min_num = min(min_num, num);
    }
    cout << min_num << endl;
    return 0;
}
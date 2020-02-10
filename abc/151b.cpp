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
    ll n, k, m; cin >> n >> k >> m;
    ll sum = 0;
    REP(i, n-1) {
        ll num; cin >> num;
        sum += num;
    }
    if (m * n - sum > k) cout << -1 << endl;
    else {
        cout << max((ll)0, m * n - sum) << endl;
    }
    return 0;
}
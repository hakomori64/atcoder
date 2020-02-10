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

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    while (b != 0) {
        ll x = a, y = b;
        a = y;
        b = x % y;
    }
    return a;
}

int main()
{
    ll n; cin >> n;
    ll a[n];
    REP(i, n) cin >> a[i];

    ll l_gcd[n]; ll r_gcd[n];
    l_gcd[0] = a[0]; r_gcd[n-1] = a[n-1];
    REP(i, n-1) {
        l_gcd[i+1] = gcd(l_gcd[i], a[i+1]);
        r_gcd[n-2-i] = gcd(r_gcd[n-1-i], a[n-2-i]);
    }
    ll ans = 0;
    REP(i, n) {
        if (i == 0) ans = max(ans, r_gcd[1]);
        else if (i == n - 1) ans = max(ans, l_gcd[n-2]);
        else ans = max(ans, gcd(l_gcd[i-1], r_gcd[i+1]));
    }
    cout << ans << endl;
    return 0;
}
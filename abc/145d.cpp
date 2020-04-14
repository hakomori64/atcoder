#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll mod_pow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

ll mod_inv(ll x, ll mod) {
    return mod_pow(x, mod - 2, mod);
}

ll comb(ll n, ll r, ll mod) {
    ll dividend = 1, divisor = 1;
    for (ll i = 1; i <= r; i++) {
        dividend = dividend * (n + 1 - i) % mod;
        divisor = divisor * mod_inv(i, mod) % mod;
    }
    return dividend * divisor % mod;
}

int main()
{
    ll x, y; cin >> x >> y;
    ll cnt = 0;
    for (int a = 0; a <= x; a++) {
        if ((x - a) % 2) continue;
        int b = (x - a) / 2;
        if (2 * a + b == y) {
            cnt = cnt + comb(a + b, min(a, b), (ll)(1e9+7)) % (ll)(1e9+7);
        }
    }
    cout << cnt << endl;
    return 0;
}
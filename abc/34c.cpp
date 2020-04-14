#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll extgcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    ll d = extgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

ll mod_inverse(ll a, ll m) {
    // return a^-1 mod m
    ll x, y;
    extgcd(a, m, x, y);
    return (m + x % m) % m;
}

const ll MAX = 200010;
const ll MOD = 1e9+7;

ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;  
    }
}

ll COM(ll n, ll k) {
    if (n < k || n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD; 
}

int main()
{
    COMinit();
    ll w, h; cin >> w >> h;
    cout << COM(w + h - 2, h - 1) << endl;
    return 0;
}
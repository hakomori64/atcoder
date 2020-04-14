#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vll memo(2e5+10, 0);
vll c(2e5+10, 0);

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
} 

ll mod_inv(ll a, ll mod) {
    return modpow(a, mod - 2, mod);
}

const int MAX = 5e5+10;
const int MOD = 1e9+7;

ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(ll n, ll k) {
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    ll n, a, b; cin >> n >> a >> b;
    ll sum = modpow(2, n, 1e9+7) - 1;
    ll nca = 1, den = 1;
    for (int i = n - a + 1; i <= n; i++) nca = (nca * i) % MOD;
    for (int i = 1; i <= a; i++) den = (den * i) % MOD;
    sum = (sum - (nca * mod_inv(den, MOD)) % MOD + MOD) % MOD;
    ll ncb = 1; den = 1;
    for (int i = n - b + 1; i <= n; i++) ncb = (ncb * i) % MOD;
    for (int i = 1; i <= b; i++) den = (den * i) % MOD;
    sum = (sum - (ncb * mod_inv(den, MOD)) % MOD + MOD) % MOD;
    cout << (sum + MOD) % MOD << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

map<pair<ll, ll>, ll> mp;
ll n, k, sum;

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);

    while (b > 0) {
        ll x = a, y = b;
        a = y, b = x % y;
    }

    return a;
}


// index : 0 ~ n - 1

void dfs(ll index, ll _gcd) {
    if (index >= n) {
        sum = (sum + _gcd) % (ll)(1e9 + 7);
        return;
    }

    for (int i = 1; i <= k; i++) {
        ll num = gcd(_gcd, i);
        if (num == 1) {
            sum += modpow(k, max(0LL, (n - 1) - index), (ll)(1e9 + 7));
        } else {
            dfs(index + 1, num);
        }
    }
}

int main()
{
    cin >> n >> k;
    if (n == 1) {
        ll s = 0;
        for (int i = 1; i <= k; i++) {
            s += i;
        }
        cout << s << endl;
        return 0;
    }

    for (ll i = 1; i <= k; i++) {
        dfs(1, i);
    }
    cout << sum << endl;

    return 0;
}
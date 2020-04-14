#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll gcd(ll a, ll b) {
    while (b) {
        ll x = a, y = b;
        a = y, b = x % y;
    }
    return a;
}

vector<pair<ll, ll>> prime_factorize(ll n) {
    vector<pair<ll, ll>> res;
    for (ll p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        ll num = 0;
        while (n % p == 0) { ++num; n /= p;}
        res.push_back({p, num});
    }

    if (n != 1) res.push_back({n, 1});
    return res;
}

int main()
{
    ll a, b; cin >> a >> b;
    ll g = gcd(a, b);
    auto pf = prime_factorize(g);
    cout << pf.size() + 1 << endl;
    return 0;
}
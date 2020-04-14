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
    if (a < b) swap(a, b);

    while (b > 0) {
        ll x = a, y = b;
        a = y;
        b = x % y;
    }

    return a;
}


int main()
{
    ll n, q; cin >> n >> q;
    vll a(n); rep(i, n) cin >> a[i];
    vll s(q); rep(i, q) cin >> s[i];

    ll _gcd = a[0];
    ll start = 0;
    ll end = n - 1;
    for (int i = 1; i < n; i++) {
        _gcd = gcd(_gcd, a[i]);
        a[i] = _gcd;
        if (a[i] == 1) end = i;
    }
    //for (auto elem : a) cout << elem << " "; cout << endl;

    rep(i, q) {
        ll num = s[i];
        ll _start = start, _end = end;
        while (_end - start > 1) {
            
        }
    }
    return 0;
}
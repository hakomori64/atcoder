#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


ll gcd(ll x, ll y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main()
{
    ll n, m; cin >> n >> m;
    vll a(n);
    rep(i, n) {
        ll num; cin >> num; num /= 2;
        a[i] = num;
    }

    while (a[0] % 2 == 0) {
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 != 0) {cout << 0 << endl; return 0;}
            a[i] /= 2;
        }
        m /= 2;
    }

    for (int i = 0; i < n; i++) if (a[i] % 2 == 0) {cout << 0 << endl; return 0;}

    ll lcm = 1;
    for (int i = 0; i < n; ++i) {
        lcm = lcm / gcd(lcm, a[i]) * a[i];
        if (lcm > m) {cout << 0 << endl; return 0;};
    }
    cout << (m / lcm + 1) / 2 << endl;
    return 0;
}
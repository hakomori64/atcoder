#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll perm(ll num) {
    if (num == 1) return 1;
    else {
        return (num * (perm(num - 1) % ((ll)1e9+7))) % (ll)(1e9+7);
    }
}

int main()
{
    ll n, m; cin >> n >> m;
    if (abs(n - m) > 1) {cout << 0 << endl; return 0;}


    if (n == m) {
        ll num = perm(n);
        cout << ((2 * ((num * num) % (ll)(1e9+7))) % ((ll)1e9+7)) << endl;
    } else {
        ll num = perm(min(n, m));
        cout << ((((num * num) % (ll)(1e9+7)) * max(n, m)) % ((ll)1e9+7)) << endl;
    }
    return 0;
}
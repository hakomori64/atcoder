#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n; cin >> n;
    vll a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    rep(b, 60) {
        ll msk = 1ll << b;
        ll zero = 0, one = 0;
        rep(i, n) {
            if (a[i] & msk) one++;
            else zero++;
        }
        ans += ((((msk % (ll)(1e9+7)) * zero) % (ll)(1e9+7)) * one) % (ll)(1e9+7);
        ans %= (ll)1e9+7;
    }
    cout << ans << endl;
    return 0;
}
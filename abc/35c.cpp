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
    ll n, q; cin >> n >> q;
    vector<ll> imos(n+1);
    rep(i, q) {
        ll l, r; cin >> l >> r;
        imos[l-1]++, imos[r]--;
    }
    vector<ll> c(n);
    rep(i, n) {
        if (i == 0) c[i] = imos[i];
        else c[i] = c[i-1] + imos[i];
    }
    rep(i, n) {
        cout << c[i] % 2;
    }
    cout << endl;
    return 0;
}
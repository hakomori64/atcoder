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
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    sort(all(a)), sort(all(b)), sort(all(c));

    ll count = 0;
    rep(i, n) {
        count += max(ll(lower_bound(all(a), b[i]) - a.begin()), 0ll) * max(n - (ll)(upper_bound(all(c), b[i]) - c.begin()), 0ll);
    }
    cout << count << endl;
    return 0;
}
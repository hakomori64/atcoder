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
    ll n, m; cin >> n >> m;
    ll x, y; cin >> x >> y;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> b(m);
    rep(i, m) cin >> b[i];
 
    ll count = 0;
    ll a_start = 0, b_start = 0;
    ll time = 0;
    while (1) {
        auto opa = lower_bound(all(a), time) - a.begin();
        if (opa >= n) break;
        time = a[opa] + x;
        auto opb = lower_bound(all(b), time) - b.begin();
        if (opb >= m) break;
        time = b[opb] + y;
        count++;
    }
    cout << count << endl;
    return 0;
}

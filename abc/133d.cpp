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
    vll a(n); rep(i, n) cin >> a[i];
    ll x1 = 0;
    rep(i, n) {
        x1 += (i % 2 == 0 ? 1 : -1) * a[i];
    }
    cout << x1 << " ";
    rep(i, n - 1) {
        x1 = 2 * a[i] - x1;
        cout << x1 << " ";
    }
    cout << endl;
    return 0;
}
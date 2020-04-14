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
    ll k, n; cin >> k >> n;
    vll a(n); rep(i, n) cin >> a[i];
    a.insert(a.begin(), a[n - 1] - k);
    ll mn = 0;
    rep(i, n) {
        mn = max(mn, a[i + 1] - a[i]);
    }
    cout << k - mn << endl;
    return 0;
}
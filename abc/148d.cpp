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
    ll cnt = 1;
    ll bb = 0;
    rep(i, n) {
        if (a[i] == cnt) cnt++;
        else bb++;
    }

    if (bb == n) {
        cout << -1 << endl;
    } else {
        cout << bb << endl;
    }
    return 0;
}
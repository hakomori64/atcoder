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
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    vector<ll> y(x.begin(), x.end());
    sort(all(y));
    ll cand1 = y[y.size()/2-1], cand2 = y[y.size()/2];
    if (cand1 == cand2) {
        rep(i, n) cout << cand1 << endl;
        return 0;
    }
    ll isok1 = (count(all(y), cand1) > 1), isok2 = (count(all(y), cand2) > 1);
    rep(i, n) {
        ll num = x[i];
        if (num <= cand1) {
            cout << cand2 << endl;
        } else if (cand2 <= num) {
            cout << cand1 << endl;
        }
    }
    return 0;
}
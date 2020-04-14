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
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll c = 0;
    rep(i, n) {
        if (a[i] > x) {
            c += a[i] - x;
            a[i] = x;
        }
    }
    rep(i, n-1) {
        if (a[i] + a[i+1] > x) {
            c += a[i] + a[i+1] - x;
            if (a[i+1] < a[i] + a[i+1] - x) {
                a[i+1] = 0;
                a[i] -= a[i] - x;
            } else {
                a[i+1] -= a[i] + a[i+1] - x;
            }
        }
    }
    cout << c << endl;
    return 0;
}
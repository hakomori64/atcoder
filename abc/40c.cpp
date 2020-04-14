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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> va(n, inf);
    va[0] = 0;
    rep(i, va.size()-1) {
        va[i+1] = min(va[i+1], va[i] + abs(a[i+1] - a[i]));
        if (i + 2 < n) va[i+2] = min(va[i+2], va[i] + abs(a[i+2] - a[i]));
    }
    cout << va[va.size()-1] << endl;

    return 0;
}
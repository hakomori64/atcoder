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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> as(n);
    rep(i, n) {
        if (i == 0) as[i] = a[i];
        else as[i] = as[i-1] + a[i];
    }
    ll count = 0;
    as.insert(as.begin(), 0);
    // for (auto elem : as) cout << elem << " "; cout << endl;
    rep(i, n - k + 1) {
        count += as[i+k] - as[i];
    }
    cout << count << endl;
    return 0;
}
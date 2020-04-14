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
    vector<ll> a(n), csum(n);
    rep(i, n) cin >> a[i];
    rep(i, n) {
        if (i == 0) csum[i] = a[i];
        else {
            csum[i] = a[i] + csum[i-1];
        }
    }

    // for (auto elem : csum) cout << elem << " "; cout << endl;

    ll min_diff = inf;
    for (size_t i = 0; i < n-1; i++)
    {
        min_diff = min(min_diff, abs(csum[i] - (csum[n-1] - csum[i])));
    }
    cout << min_diff << endl;
    
    return 0;
}
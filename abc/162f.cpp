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
    sort(all(a));
    ll s = 0;
    if (n % 2 == 0) {
        for (int i = 1; i < n; i += 2) s += a[i];
    } else {
        
    }
    cout << s << endl;
    return 0;
}
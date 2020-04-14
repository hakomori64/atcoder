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
    vll a(m+2, 0);
    ll sum = 0;
    rep(i, n) {
        ll l, r, p; cin >> l >> r >> p;
        a[l] += p, a[r+1] -= p;
        sum += p;
    }
    for (int i = 1; i < m+2; i++) {
        a[i] = a[i] + a[i-1];
    }
    a.erase(a.begin());
    a.pop_back();
    cout << sum - *min_element(all(a)) << endl;
    return 0;
}
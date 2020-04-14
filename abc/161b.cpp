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
    vector<double> a(n); rep(i, n) cin >> a[i];
    sort(all(a));
    reverse(all(a));
    ll sum = accumulate(all(a), (double)0);
    rep(i, m) {
        if (a[i] < (double)sum / (4 * m)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
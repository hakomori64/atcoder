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
    sort(all(a));

    ll l = -inf;
    ll r = inf;
    while (l + 1 < r) {
        ll M = (l + r) / 2;
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            int l = i, r = n;
            while (l + 1 < r) {
                ll m = (l + r) / 2;
                if (a[i] * a[m] <= M) {
                    (a[i] > 0 ? l = m : r = m);
                } else {
                    (a[i] > 0 ? r = m : l = m);
                }
            }
            if (a[i] > 0) cnt += l - i;
            else cnt += n - r;
        }
        (cnt < k) ? l = M : r = M;
    }
    cout << r << endl;
    return 0;
}
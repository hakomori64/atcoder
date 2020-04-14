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
    vector<ll> c(a.begin(), a.end());

    ll ans = inf;
    ll csum = 0;
    ll num = 0;
    bool is_positive = true;
    rep(i, n) {
        csum += c[i];
        if (is_positive) {
            if (csum <= 0) {
                num += abs(1 - csum);
                csum = 1;
            }
        } else {
            if (csum >= 0) {
                num += abs(csum + 1);
                csum = -1;
            }
        }

        is_positive = !is_positive;
    }
    ans = min(ans, num);

    csum = 0;
    num = 0;
    is_positive = false;
    rep(i, n) {
        csum += c[i];
        if (is_positive) {
            if (csum <= 0) {
                num += abs(1 - csum);
                csum = 1;
            }
        } else {
            if (csum >= 0) {
                num += abs(csum + 1);
                csum = -1;
            }
        }
        is_positive = !is_positive;
    }
    ans = min(ans, num);
    cout << ans << endl;
    return 0;
}
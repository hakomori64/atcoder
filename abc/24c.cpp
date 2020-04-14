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
    ll n, d, k; cin >> n >> d >> k;
    vector<pair<ll, ll>> lr(d);
    rep(i, d) {
        ll l, r; cin >> l >> r;
        lr[i] = make_pair(l, r);
    }
    vector<ll> loc(k), g(k), days(k);
    rep(i, k) {
        cin >> loc[i] >> g[i];
    }

    ll rc = 0;
    int i;
    for (i = 0; i < d; i++) {
        auto _ = lr[i]; ll l = _.first, r = _.second;
        rep(j, k) {
            if (loc[j] == g[j]) continue;

            if (l <= loc[j] && loc[j] <= r) {
                if (l <= g[j] && g[j] <= r) {
                    rc++;
                    loc[j] = g[j];
                    days[j] = i + 1;
                } else {
                    if (g[j] < l) loc[j] = l;
                    else loc[j] = r;
                }
            }
        }
        if (rc == k) break;
    }
    
    for (auto elem : days) {
        cout << elem << endl;
    }
    return 0;
}
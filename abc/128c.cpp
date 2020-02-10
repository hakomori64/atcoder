#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>> vec(m);
    REP(i, m) {
        ll k; cin >> k;
        vec[i].resize(k);
        REP(j, k) {
            cin >> vec[i][j];
            --vec[i][j];
        }
    }

    vector<ll> l(m);
    REP(i, m) {
        cin >> l[i];
    }

    ll ans = 0;

    REP(i, (1 << n)) {
        bool ok = true;
        REP(j, m) {
            ll c = 0;
            for (auto elem : vec[j]) {
                if ((i >> elem) & 1) c++;
            }
            if (c % 2 != l[j]) ok = false;
        }
        if (ok) ans++;
    }
    cout << ans << endl;
    return 0;
}
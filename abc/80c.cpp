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
    vector<vector<ll>> f(n, vector<ll>(10)), p(n, vector<ll>(10));
    rep(i, n) {
        rep (j, 5) {
            cin >> f[i][j] >> f[i][j+5];
        }
    }
    rep(i, n) {
        rep (j, 11) {
            cin >> p[i][j];
        }
    }
    // for (auto elem1 : f) {
    //     for (auto elem : elem1) cout << elem << " "; cout << endl;
    // }

    // for (auto elem1 : p) {
    //     for (auto elem : elem1) cout << elem << " "; cout << endl;
    // }

    ll max_num = -inf;

    for (ll bit = 1; bit < (1<<10); bit++) {
        ll num = 0;
        rep (i, n) {
            ll count = 0;
            rep (j, 10) {
                ll m = (bit>>j) & 1 & f[i][j];
                // cout << m << " ";
                count += m;
            }
            // cout << endl;
            // cout << count << endl;
            num += p[i][count];
        }
        // cout << "num: " << num << endl;
        max_num = max(max_num, num);
    }
    cout << max_num << endl;
    return 0;
}
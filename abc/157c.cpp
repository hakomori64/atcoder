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
    vector<pair<ll, char>> v(m);
    rep(i, m) {
        ll s; char c; cin >> s >> c; s--;
        v[i] = {s, c};
    }

    for (ll i = (n != 1 ? (ll)pow(10, n - 1) : 0); i < (ll)pow(10, n); i++) {
        string j = to_string(i);
        bool isok = true;
        rep(k, m) {
            if (j[v[k].first] != v[k].second) {
                isok = false;
            }
        }

        if (isok) {
            cout << j << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
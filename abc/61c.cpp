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
    vector<pair<ll, ll>> ab(n);
    rep(i, n) {
        ll a, b; cin >> a >> b;
        ab[i] = make_pair(a, b);
    }
    sort(all(ab));
    rep(i, n) {
        ll a, b; a = ab[i].first, b = ab[i].second;
        if (i == 0) ab[i] = make_pair(a, b);
        else {
            ab[i] = make_pair(a, ab[i-1].second + b);
        }
    }

    rep(i, n) {
        if (ab[i].second >= k) {
            cout << ab[i].first << endl;
            return 0;
        }
    }
    return 0;
}
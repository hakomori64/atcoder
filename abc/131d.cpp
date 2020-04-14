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
    vector<pair<ll, ll>> v(n);
    rep(i, n) {
        ll a, b; cin >> a >> b;
        v[i] = {b, a};
    }

    sort(all(v));
    ll sum = 0;
    rep(i, n) {
        sum += v[i].second;
        if (sum > v[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
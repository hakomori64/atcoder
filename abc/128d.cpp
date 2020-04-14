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
    vector<ll> v(n);
    rep(i, n) cin >> v[i];
    ll lim = min(n, k);
    ll max_num = -inf;
    for (ll a = 0; a <= lim; a++) {
        for (ll b = lim - a; b >= 0; b--) {
            vector<ll> v2;
            rep(i, a) v2.push_back(v[i]);
            for (int i = n - 1; i >= (n - b); i--) v2.push_back(v[i]);
            sort(all(v2));
            ll i;
            for (i = 0; i < k - (a + b); i++) {
                if (i >= v2.size() || v2[i] >= 0) break;
            }
            ll sum = 0;
            for (; i < v2.size(); i++) sum += v2[i];
            max_num = max(max_num, sum);
        }
    }
    cout << max_num << endl;
    return 0;
}
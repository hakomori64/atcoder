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
    map<ll, ll> mp;
    rep(i, n) {
        ll m; cin >> m;
        mp[m]++;
    }
    ll count = 0;
    for (auto elem : mp) {
        ll k = elem.first, v = elem.second;
        if (v >= k) count += v - k;
        else count += v;
    }
    cout << count << endl;
    return 0;
}
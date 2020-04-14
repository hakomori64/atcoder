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
    map<ll, vector<ll>> mp;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    vector<pair<ll, vector<ll>>> v;
    for (auto elem : mp) {
        v.push_back(elem);
    }

    rep(i, v.size()) {
        auto elem = v[i];
        rep(j, elem.second.size()) {
            a[elem.second[j]] = i;
        }
    }

    for (auto elem : a) cout << elem << endl;
    return 0;
}
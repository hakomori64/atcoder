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
    map<ll, ll, greater<ll>> mp;
    rep(i, n) {
        ll height; cin >> height;
        mp[height] = i+1;
    }
    for (auto elem : mp) {
        cout << elem.second << endl;
    }

    return 0;
}
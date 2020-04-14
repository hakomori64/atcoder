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
        ll m; cin >> m;
        mp[m]++;
    }

    ll v;
    ll count = 0;
    for (auto elem : mp) {
        if (elem.second > 3 && count == 0) {
            cout << elem.first * elem.first << endl;
            return 0;
        }
        if (elem.second > 1) {
            if (count == 0) {
                v = elem.first;
                count++;
            } else {
                cout << v * elem.first << endl;
                return 0;        
            }
        }
    }
    cout << 0 << endl;
    
    return 0;
}
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
    ll n; string s; cin >> n >> s;
    vector<ll> v(26, -1);
    
    ll q; cin >> q;
    rep(_, q) {
        int type; cin >> type;
        if (type == 1) {
            ll i; char c; cin >> i >> c; i--;
            s[i] = c;
        } else {

        }
    }
    return 0;
}
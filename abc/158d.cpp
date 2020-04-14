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
    string s; cin >> s;
    ll q; cin >> q;
    ll count = 0;
    rep(i, q) {
        ll t; cin >> t;
        if (t == 1) {
            count++;
        } else {
            ll f; char c; cin >> f >> c;
            if ((f + count) % 2 == 1) s.insert(s.begin(), c);
            else s.push_back(c);
        }
    }
    if (count % 2 == 1) reverse(all(s));
    cout << s << endl;
    return 0;
}
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
    ll s, l, r; cin >> s >> l >> r;
    if (l <= s && s <= r) {
        cout << s << endl;
        return 0;
    }

    if (s < l) cout << l << endl;
    else cout << r << endl;
    return 0;
}
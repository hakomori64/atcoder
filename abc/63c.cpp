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
    vector<ll> s(n);
    rep(i, n) cin >> s[i];
    sort(all(s));
    ll total = accumulate(all(s), 0);
    if ((total % 10) != 0) {
        cout << total << endl;
        return 0;
    }

    rep(i, s.size()) {
        if ((s[i] % 10) != 0) {
            cout << total - s[i] << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
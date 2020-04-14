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
    vector<ll> s(n);
    rep(i, n) cin >> s[i];
    if (count(all(s), 0)) {
        cout << n << endl;
        return 0;
    }

    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll back = 0;
    ll max_length = 0;
    ll current = 1;
    rep(i, s.size()) {
        current *= s[i];
        // cout << "current(previous): " << current << endl;
        if (current <= k) max_length = max(max_length, i - back + 1);
        while (current > k) {
            current /= s[back];
            back++;
        }
        // cout << "current: " << current << endl;
    }
    cout << max_length << endl;
    return 0;
}
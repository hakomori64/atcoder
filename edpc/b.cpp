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
    vll h(n);
    rep(i, n) cin >> h[i];
    vll dp(1e6, inf);
    dp[0] = 0;
    rep(i, n) {
        for (int _k = 1; _k <= k; _k++) {
            dp[i + _k] = min(dp[i + _k], dp[i] + abs(h[i + _k] - h[i]));
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
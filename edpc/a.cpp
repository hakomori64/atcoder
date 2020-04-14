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
    vll h(n);
    rep(i, n) cin >> h[i];
    vll dp(n + 10);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; i++) {
        dp[i] = min(abs(h[i] - h[i - 1]) + dp[i - 1], abs(h[i] - h[i - 2]) + dp[i - 2]);
    }
    cout << dp[n - 1] << endl;
    return 0;
}
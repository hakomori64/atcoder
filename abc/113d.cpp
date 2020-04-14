#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
const int mod = 1e9+7;


int main()
{
    ll H, W, K; cin >> H >> W >> K;
    vvll dp(H + 1, vll (W, 0)); dp[0][0] = 1;
    rep(i, H) {
        rep(j, W) {
            rep(k, 1<<(W - 1)) {
                bool ok = true;
                rep(l, W - 2) {
                    if (((k >> l) & 1) && ((k >> (l + 1)) & 1)) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    if (j >= 1 && ((k >> (j - 1)) & 1)) {
                        dp[i + 1][j - 1] += dp[i][j];
                        dp[i + 1][j - 1] %= mod;
                    } else if (j <= W - 2 && ((k >> j) & 1)) {
                        dp[i + 1][j + 1] += dp[i][j];
                        dp[i + 1][j + 1] %= mod;
                    } else {
                        dp[i + 1][j] += dp[i][j];
                        dp[i + 1][j] %= mod;
                    }
                }
            }
        }
    }
    cout << dp[H][K - 1] << endl;
    
    return 0;
}
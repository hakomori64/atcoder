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
    ll N; cin >> N;
    int M = 1e9+7;
    vector<int> dp[4][4][4];
    rep(i, 4) rep(j, 4) rep(k, 4) {
        dp[i][j][k] = vector<int>(N + 1, 0);
    }

    rep(i, 4) rep(j, 4) rep(k, 4) {
        if(!((i == 0 && j == 1 && k == 2) || (i == 0 && j == 2 && k == 1) || (i == 1 && j == 0 && k == 2))) {
            dp[i][j][k][3] = 1;
        }
    }

    for (int n = 3; n < N; n++) {
        for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) for (int k = 0; k < 4; k++) {
            if (j == 0 && k == 2) {
                dp[j][k][0][n + 1] = (dp[j][k][0][n + 1] + dp[i][j][k][n]) % M;
                dp[j][k][2][n + 1] = (dp[j][k][2][n + 1] + dp[i][j][k][n]) % M;
                dp[j][k][3][n + 1] = (dp[j][k][3][n + 1] + dp[i][j][k][n]) % M;
            } else if ((i == 0 && k == 1) || (i == 0 && j == 1) || (j == 0 && k == 1) || (j == 1 && k == 0)) {
                dp[j][k][0][n + 1] = (dp[j][k][0][n + 1] + dp[i][j][k][n]) % M;
                dp[j][k][1][n + 1] = (dp[j][k][1][n + 1] + dp[i][j][k][n]) % M;
                dp[j][k][3][n + 1] = (dp[j][k][3][n + 1] + dp[i][j][k][n]) % M;
            } else {
                for (int m = 0; m < 4; m++) {
                    dp[j][k][m][n + 1] = (dp[j][k][m][n + 1] + dp[i][j][k][n]) % M;
                }
            }
        }
    }

    ll res = 0;
    rep(i, 4) rep(j, 4) rep(k, 4) res = (res + dp[i][j][k][N]) % M;
    cout << res << endl;

    return 0;
}
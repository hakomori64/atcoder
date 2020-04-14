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
    string S; cin >> S;
    const int N = 13;
    vector<int64_t> dp(N);
    dp[0] = 1;
    int64_t mod = 1e9 + 7;
    int64_t mul = 1;
    for (int i = S.size()-1; i >= 0; i--) {
        vector<int64_t> nextDP(N);
        char c = S[i];
        if (c == '?') {
            for (int k = 0; k < 10; k++) {
                for (int j = 0; j < N; j++) {
                    nextDP[(k * mul + j) % 13] += dp[j];
                    nextDP[(k * mul + j) % 13] %= mod;
                }
            }
        } else {
            int k = (int)(c - '0');
            for (int j = 0; j < N; j++) {
                nextDP[(k * mul + j) % 13] += dp[j];
                nextDP[(k * mul + j) % 13] %= mod;
            }
        }

        dp = nextDP;

        mul *= 10;
        mul %= N;
    }

    cout << dp[5] << endl;
    return 0;
}
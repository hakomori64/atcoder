#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


ll mod = 1e9+7;
int main()
{
    ll N, M; cin >> N >> M;
    vector<ll> oks(N+1, true);
    REP(i, M) {
        ll num; cin >> num;
        oks[num] = false;
    }

    vector<ll> dp(N+1);
    dp[0] = 1;
    for (ll now = 0; now < N; ++now) {
        for (ll next = now + 1; next <= min(N, now + 2); next++) {
            if (oks[next]) {
                dp[next] += dp[now];
                dp[next] %= mod;
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}
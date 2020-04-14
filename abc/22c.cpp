#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll inf = 1ll<<60;

int main()
{
    ll n, m; cin >> n >> m;
    vll se;
    map<ll, ll> mp;
    vvll dist(n, vll(n, inf));
    rep(i, n) dist[i][i] = 0;
    for (int i = 0; i < m; i++) {
        ll u, v, l; cin >> u >> v >> l;
        u -= 2; v -= 2;
        if (u == -1 || v == -1) {
            if (v == -1) swap(u, v);
            se.push_back(v);
            mp[v] = l;
            continue;
        }
        dist[u][v] = l;
        dist[v][u] = l;
    }

    rep(k, n - 1) rep(i, n - 1) rep(j, n - 1) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    }
    ll ans = inf;
    ll len = se.size();
    rep(i, len) rep(j, len) {
        if (i == j) continue;
        ans = min(ans, dist[se[i]][se[j]] + mp[se[i]] + mp[se[j]]);
    }
    if (ans == inf) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


vll d;
vector<vector<pair<ll, ll>>> rel;

void dfs(ll node) {
    for (pair<ll, ll> _nn : rel[node]) {
        ll nn = _nn.first, cost = _nn.second;
        if (d[nn] > -1) continue;
        d[nn] = d[node] + cost;
        dfs(nn);
    }
}

int main()
{
    ll n; cin >> n;
    d.resize(n, -1);
    rel.resize(n);
    rep(i, n - 1) {
        ll u, v, w; cin >> u >> v >> w; u--, v--, w;
        rel[u].push_back({v, w});
        rel[v].push_back({u, w});
    }
    d[0] = 0;
    dfs(0);
    rep(i, d.size()) {
        cout << d[i] % 2 << endl;
    }
    return 0;
}
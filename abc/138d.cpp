#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vector<bool> seen(200010, false);
vector<ll> ans(200010);
vector<ll> P(200010);
vvll graph;

void dfs(int v) {
    ans[v] += P[v];
    seen[v] = true;
    for (auto nv : graph[v]) {
        if (seen[nv]) continue;
        ans[nv] += ans[v];
        dfs(nv);
    }
}

int main()
{    
    ll n, q; cin >> n >> q;
    graph.resize(n);
    rep(i, n - 1) {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    rep(i, q) {
        ll p, x; cin >> p >> x; p--;
        P[p] += x;
    }
    dfs(0);
    rep(i, n) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
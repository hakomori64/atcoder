#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct edge {
    ll to;
    ll cost;
};
const ll MAX_V = 110;
typedef pair<ll, ll> P;
ll V, d[MAX_V], cnt[MAX_V];
vector<edge> G[MAX_V];

void dijkstra(ll s) {
    fill(d, d + V, inf);
    d[s] = 0;
    fill(cnt, cnt + V, 0);
    cnt[s] = 1;

    priority_queue<P, vector<P>, greater<P>> que;
    que.push(P(0, s));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first) {
            continue;
        }
        for (auto e : G[v]) {
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
                cnt[e.to] = cnt[v];
            } else if (d[e.to] == d[v] + e.cost) {
                cnt[e.to] += cnt[v];
                cnt[e.to] %= (ll)1e9+7;
            }
        }
    }
}

int main()
{
    cin >> V;
    ll a, b; cin >> a >> b; a--, b--;
    ll m; cin >> m;
    rep(i, m) {
        ll x, y; cin >> x >> y; x--, y--;
        G[x].push_back({y, 1});
        G[y].push_back({x, 1});
    }

    dijkstra(a);
    cout << cnt[b] << endl;
    return 0;
}
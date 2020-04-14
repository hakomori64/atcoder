#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll N;
vvll G;
map<pair<ll, ll>, ll> mp;
ll ma = 0;

void dfs(ll n, ll pre, ll col) {
    for (auto nv: G[n]) {
        if (nv == pre) continue; //　そこからきたのならなにもしない
        col++;
        col %= ma;
        ll a = n, b = nv;
        if (a > b) swap(a, b);
        if (mp[{a, b}] > 0) continue;
        mp[{a, b}] = col + 1;
        dfs(nv, n, col);
    }
}

int main()
{
    cin >> N;
    G.resize(N);
    vll a(N-1), b(N-1);
    rep(i, N-1) {
        cin >> a[i] >> b[i]; a[i]--, b[i]--;
        if (a[i] > b[i]) swap(a[i], b[i]);
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }    
    ll idx = 0;
    rep(i, N) {
        if (ma < (ll)G[i].size()) {
            idx = i;
            ma = (ll)G[i].size();
        }
    }

    dfs(idx, -1, 0);
    cout << ma << endl;
    rep(i, N - 1) cout << mp[{a[i], b[i]}] << endl;
    return 0;
}
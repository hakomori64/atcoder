#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


struct UnionFind {
    vll par;
    vll count;

    UnionFind(ll n) {
        par.resize(n), count.resize(n);
        rep(i, n) par[i] = i, count[i] = 1;
    }

    ll root (ll x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = root(par[x]);
        }
    }

    void unite(ll x, ll y) {
        ll rx = root(x);
        ll ry = root(y);
        if (rx == ry) return;
        if (rx > ry) {
            count[rx] += count[ry];
            par[ry] = rx;
        } else {
            count[ry] += count[rx];
            par[rx] = ry;
        }
    }

    bool same (ll x, ll y) {
        return root(x) == root(y);
    }

    ll size (ll x) {
        return count[root(x)];
    }
};

int main()
{
    ll N, M; cin >> N >> M;
    vll A(M), B(M);
    rep(i, M) {
        cin >> A[i] >> B[i]; A[i]--, B[i]--;
    }

    UnionFind tree(N);
    vll ans(M);

    ll res = N * (N - 1) / 2;
    for (ll i = M - 1; i >= 0; i--) {
        ll a, b;
        a = A[i], b = B[i];
        ans[i] = res;
        if (tree.same(a, b) == false) {
            // この橋が異なるグループをつなぐようなら
            ll asize = tree.size(a), bsize = tree.size(b);
            res -= asize * bsize;
        }
        tree.unite(a, b);
    }

    rep(i, M) {
        cout << ans[i] << endl;
    }

    return 0;
}
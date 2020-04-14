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
    private:
        vll par;
    public:
        map<ll, ll> mp;
        UnionFind(ll N) : par(N) {
            rep(i, N) par[i] = i;
        }

        ll root (ll x) {
            if (par[x] == x) return x;
            return par[x] = root(par[x]);
        }

        void unite(ll x, ll y) {
            ll rx = root(x);
            ll ry = root(y);
            if (rx == ry) return;
            par[rx] = ry;
        }

        bool same(ll x, ll y) {
            ll rx = root(x);
            ll ry = root(y);
            return rx == ry;
        }

        void calc_group_size() {
            rep(i, par.size()) {
                mp[root(i)]++;
            }
        }

        ll get_group_size(ll i) {
            return mp[root(i)];
        }
};

int main()
{
    ll n, m, k; cin >> n >> m >> k;
    UnionFind uf(n);
    vector<set<ll>> rel(n), block(n);
    rep(i, m) {
        ll a, b; cin >> a >> b; a--, b--;
        uf.unite(a, b);
        rel[a].insert(b);
        rel[b].insert(a);
    }
    rep(i, k) {
        ll c, d; cin >> c >> d; c--, d--;
        block[c].insert(d);
        block[d].insert(c);
    }
    uf.calc_group_size();
    // cout << "---------------- group and size" << endl;
    // for (auto elem : uf.mp) {
    //     cout << elem.first << " " << elem.second << endl;
    // }
    // cout << "------------------------" << endl;

    rep(i, n) {
        // i番目のユーザーについて        // cout << "group size: " << uf.get_group_size(i) << endl;
        // cout << "direct relation size: " << rel[i].size() << endl;

        ll num = uf.get_group_size(i) - rel[i].size() - 1ll;
        for (auto c : block[i]) {
            if (uf.same(i, c)) num--;
        }
        cout << num << " ";
    }
    cout << endl;


    return 0;
}
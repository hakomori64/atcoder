#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

class UnionFind {
    vector<ll> par;
    public:
        UnionFind(ll n) {
            par.resize(n);
            rep(i, n) {
                par[i] = i;
            }
        }

        ll root(ll a) {
            if (par[a] == a) {
                return a;
            } else {
                return par[a] = root(par[a]);
            }
        }

        bool is_same(ll a, ll b) {
            return root(a) == root(b);
        }

        void unite(ll a, ll b) {
            ll ra = root(a);
            ll rb = root(b);
            if (ra == rb) return;
            par[ra] = rb;
        }

        void printall() {
            rep(i, this->par.size()) {
                cout << i << ": " << this->par[i] << endl;
            }
        }
};


int main()
{
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll>> ab(m);
    ll count = 0;
    rep(i, m) {
        ll a, b; cin >> a >> b;
        ab[i] = make_pair(a-1, b-1);
    }
    
    rep(i, m) {
        UnionFind uf = UnionFind(n);
        rep(j, m) {
            if (j == i) continue;
            auto elem = ab[j];
            uf.unite(elem.first, elem.second);
        }

        if (!uf.is_same(ab[i].first, ab[i].second)) {
            count++;
        }
    }

    cout << count << endl;


    return 0;
}
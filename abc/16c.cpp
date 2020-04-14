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
    ll n, m; cin >> n >> m;
    vvll rel(n);
    rep(i, m) {
        ll a, b; cin >> a >> b; a--, b--;
        rel[a].push_back(b);
        rel[b].push_back(a);
    }
    // for (auto elem1 : rel) {
    //     for (auto elem : elem1) cout << elem << " "; cout << endl;
    // }
    vvll flist(n);
    rep(i, n) {
        set<ll> st;
        for (auto f : rel[i]) {
            for (auto ff : rel[f]) {
                if (count(all(rel[i]), ff) == 0 && ff != i) {
                    st.insert(ff+1);
                };
            }
        }
        cout << st.size() << endl;
    }
    // for (auto elem1 : flist) {
    //     for (auto elem : elem1) cout << elem << " "; cout << endl;
    // }
    return 0;
}
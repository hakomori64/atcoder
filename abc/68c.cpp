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
    set<ll> from1, ton;
    rep(i, m) {
        ll a, b; cin >> a >> b;
        if (a == 1) from1.insert(b);
        if (b == n) ton.insert(a);
    }

    vector<ll> result(from1.size() + ton.size());
    auto it = set_intersection(from1.begin(), from1.end(), ton.begin(), ton.end(), result.begin());
    result.resize(it - result.begin());
    if (result.size() > 0) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
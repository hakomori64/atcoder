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
    ll x, y, z, k; cin >> x >> y >> z >> k;
    vll a(x), b(y), c(z);
    rep(i, x) cin >> a[i];
    rep(i, y) cin >> b[i];
    rep(i, z) cin >> c[i];
    sort(all(a)), sort(all(b)), sort(all(c));

    priority_queue<ll> que;
    rep(i, x) rep(j, y) {
        que.push(a[i] + b[j]);
    }
    /*
    while (que.size()) {
        cout << que.top() << endl; que.pop();
    }
    */

    priority_queue<ll> que2;
    rep(i, min(x * y, k)) {
        ll val = que.top(); que.pop();
        rep(j, z) {
            que2.push(val + c[j]);
        }
    }

    rep(i, k) {
        cout << que2.top() << endl; que2.pop();
    }
    return 0;
}
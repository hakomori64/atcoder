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
    ll n; cin >> n;
    vll r,b;
    rep(i, n) {
        ll a; char color;
        cin >> a >> color;
        if (color == 'R') r.push_back(a);
        else b.push_back(a);
    }

    sort(all(r));
    sort(all(b));
    rep(i, r.size()) {
        cout << r[i] << endl;
    }
    rep(i, b.size()) {
        cout << b[i] << endl;
    }
    return 0;
}
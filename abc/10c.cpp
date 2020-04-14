#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

double dist(pair<ll, ll> src, pair<ll, ll> dst) {
    double num = pow(abs(dst.first - src.first), 2) + pow(abs(dst.second - src.second), 2);
    return sqrt(num);
}


int main()
{
    pair<ll, ll> ta, tb; ll t, v;
    cin >> ta.first >> ta.second >> tb.first >> tb.second >> t >> v;
    ll n; cin >> n;
    rep(i, n) {
        pair<ll, ll> g; cin >> g.first >> g.second;
        if (dist(ta, g) + dist(g, tb) <= (double)t * v) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
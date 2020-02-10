#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    while (b != 0) {
        ll x = a, y = b;
        a = y, b = x % y;
    }
    return a;
}

int main()
{
    ll n, x; cin >> n >> x;
    ll g; cin >> g;
    g = abs(g - x);
    REP(i, n-1) {
        ll num; cin >> num;
        num = abs(num - x);
        g = gcd(g, num);
    }
    cout << g << endl;
    return 0;
}
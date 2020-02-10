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

ll gcd(ll c, ll d) {
    while (d > 0) {
        ll x = c;
        ll y = d;
        c = y;
        d = x % y;
    }
    return c;
}

int main()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll n = c * d / gcd(c, d);
    ll _b = b - b / c - b / d + b / n;
    ll _a1 = (a - 1) - (a - 1) / c - (a - 1) / d + (a - 1) / n;
    cout << _b - _a1 << endl;
    return 0;
}
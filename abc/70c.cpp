#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
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
    ll n; cin >> n;
    ll lcm = 1;
    rep(i, n) {
        ll num; cin >> num;
        lcm = lcm / gcd(lcm, num) * num;
    }
    cout << lcm << endl;

    return 0;
}
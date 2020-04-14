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

    while (b > 0) {
        ll x = a, y = b;
        a = y;
        b = x % y;
    }
    return a;
}

int main()
{
    ll k; cin >> k;
    ll s = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                s += gcd(gcd(a, b), c);
            }
        }
    }
    cout << s << endl;
    return 0;
}
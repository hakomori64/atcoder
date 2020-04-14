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
    ll n, total; cin >> n >> total;
    for (ll x = 0; x <= n; x++) {
        for (ll y = 0; y <= n - x; y++) {
            ll z = n - x - y;
            if (10000 * x + 5000 * y + 1000 * z == total) {
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
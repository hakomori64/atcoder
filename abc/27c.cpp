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
    ll n; cin >> n; n;
    ll depth = 0;
    for (;;depth++) {
        if ((1ll << depth) <= n+1 && 2 * (1ll<<depth) - 1 >= n + 1) {
            break;
        }
    }

    ll x = 1;
    ll cnt = 0;
    while (1) {
        if (depth % 2) {
            x = x * 2; cnt++;
            if (x >= n + 1) break;
            x = x * 2 + 1; cnt++;
            if (x >= n + 1) break;
        } else {
            x = x * 2 + 1; cnt++;
            if (x >= n + 1) break;
            x = x * 2; cnt++;
            if (x >= n + 1) break;
        }
    }

    if (cnt & 1) {
        cout << "Aoki" << endl;
    } else {
        cout << "Takahashi" << endl;
    }
    return 0;
}
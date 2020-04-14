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
    vll ng(3);
    rep(i, 3) {
        cin >> ng[i];
        if (ng[i] == n) {
            cout << "NO" << endl;
            return 0;
        }
    };
    ll cur = n;
    ll nop = 100;
    while (cur > 0 && nop > 0) {
        if (cur <= 3) {
            cout << "YES" << endl;
            return 0;
        }
        if (count(all(ng), cur - 3) == 0) {
            cur -= 3;
            nop--;
            continue;
        }

        if (count(all(ng), cur - 2) == 0) {
            cur -= 2;
            nop--;
            continue;
        }

        if (count(all(ng), cur - 1) == 0) {
            cur--;
            nop--;
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    if (nop == 0 && cur > 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
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
    ll n, m; cin >> n >> m;
    for (int baby = 0; baby <= n; baby++) {
        ll baby_foot = baby * 4;
        ll left = m - baby_foot;
        if (left < 0) {
            break;
        }
        for (int old = 0; old <= n; old++) {
            ll old_foot = old * 3;
            left -= old_foot;
            if (left < 0 || baby + old > n) {
                break;
            }
            ll adult = left / 2;
            if (0 <= adult && adult <= n && (baby + old + adult) == n && (adult * 2 + old * 3 + baby * 4 == m)) {
                cout << adult << " " << old << " " << baby << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
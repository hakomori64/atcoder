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
    ll n, k; cin >> n >> k;
    ll first = n;
    vector<ll> d(k);
    rep(i, k) cin >> d[i];
    for (size_t i = n; i < (ll)pow(10, (to_string(n)).size() + 2); i++)
    {
        ll tmp = i;
        bool isok = true;
        while (tmp) {
            if (count(all(d), tmp % 10)) {
                isok = false;
                break;
            }
            tmp /= 10;
        }
        if (isok) {
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}
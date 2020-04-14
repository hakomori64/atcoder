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
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    map<ll, ll> mp;
    for (size_t i = 2; i <= n; i++)
    {
        ll j = 2;
        ll tmp = i;
        while (tmp >= j * j) {
            if (tmp % j == 0) {
                mp[j]++;
                tmp /= j;
            } else {
                j++;
            }
        }
        mp[tmp]++;
    }

    ll num = 1;
    for (auto elem : mp) {
        num = ((num % (ll)(1e9+7)) * (elem.second + 1) % (ll)(1e9+7));
    }
    cout << num << endl;

    return 0;
}
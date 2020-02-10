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


int main()
{
    ll l, r; cin >> l >> r;
    if (r - l >= 2019) {
        cout << 0 << endl;
        return 0;
    }
    ll min = INF;
    for (ll i = l; i < r; i++) {
        for (ll j = i+1; j <= r; j++)
        {
            ll num = ((i % 2019) * (j % 2019)) % 2019;
            if (num < min) min = num;
        }
        
    }
    cout << min << endl;
    
    return 0;
}
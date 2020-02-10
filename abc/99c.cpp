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
    ll n; cin >> n;
    ll res = n;
    for (size_t i = 0; i <= n; i++)
    {
        ll cc = 0;
        ll t = i;
        while (t > 0) cc += t % 6, t /= 6;
        t = n - i;
        while (t > 0) cc += t % 9, t /= 9;
        if (res > cc) res = cc;
    }
    cout << res << endl;
    
    return 0;
}
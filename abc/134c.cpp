#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n; cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    vector<ll> cp(ALL(a));
    sort(ALL(cp));
    reverse(ALL(cp));
    REP(i, n) {
        if (a[i] == cp[0]) cout << cp[1] << endl;
        else cout << cp[0] << endl;
    }
    return 0;
}
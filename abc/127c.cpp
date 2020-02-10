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
    ll n, m; cin >> n >> m;
    vector<ll> imos(n+2);
    REP(i, m) {
        ll l, r; cin >> l >> r;
        imos[l]++; imos[r+1]--;
    }

    vector<ll> vec(n+1);
    vec[0] = imos[0] + imos[1];
    FOR(i, 1, n+1) {
        vec[i] = vec[i-1] + imos[i+1];
    }
    cout << count(ALL(vec), m) << endl;
    return 0;
}
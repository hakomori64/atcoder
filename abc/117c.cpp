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
    vector<ll> x(m);
    REP(i, m) cin >> x[i];
    if (n >= m) {
        cout << 0 << endl;
        return 0;
    }
    sort(ALL(x));

    vector<ll> dist(m-1);
    REP(i, m-1) dist[i] = x[i+1] - x[i];
    sort(ALL(dist));
    ll count = 0;
    REP(i, dist.size()-n+1) {
        count += dist[i];
    }
    cout << count << endl;

    return 0;   
}
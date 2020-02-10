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
    double w, h, x, y; cin >> w >> h >> x >> y;
    cout << w * h / 2 << " ";
    if (w / 2 == x && h / 2 == y) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
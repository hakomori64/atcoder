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
    vector<ll> move(5);
    ll n; cin >> n;
    REP(i, 5) cin >> move[i];
    cout << (ll)ceil((double)n / *min_element(ALL(move))) + 4 << endl;
    return 0;
}
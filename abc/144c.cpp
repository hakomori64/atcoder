#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n; cin >> n;
    ll min_path = INF;
    for (ll a = 1; a <= sqrt(n); a++) {
        if (n % a) continue;
        ll path = a + (n / a) - 2;
        if (min_path > path) {
            min_path = path;
        }
    }
    cout << min_path << endl;
    return 0;
}
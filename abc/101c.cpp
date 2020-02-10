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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    REP(i, n) cin >> v[i];
    ll index_of_1 = find(ALL(v), 1) - v.begin();

    ll min_count = INF;
    for (size_t base = max(0LL, index_of_1 - n + 1); base < min(n - 1, index_of_1 + n - 1); base++) {
        ll count = 0;
        ll current = base;
        while (current > 0) {
            count++;
            current -= k - 1;
        }

        current = base;
        while (current < n-1) {
            count++;
            current += k - 1;
        }

        min_count = min(min_count, count);
    }
    cout << min_count << endl;
    return 0;    
}
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

int D;
long long G;
vector<ll> p, c;

int main()
{
    cin >> D >> G;
    p.resize(D); c.resize(D);
    for (int i = 0; i < D; ++i) cin >> p[i] >> c[i];

    ll res = 1<<29;
    for (size_t bit = 0; bit < (1<<D); bit++)
    {
        ll sum = 0;
        ll num = 0;
        for (size_t i = 0; i < D; i++)
        {
            if (bit & (1<<i)) sum += c[i] + p[i] * 100 * (i+1), num += p[i];
        }

        if (sum >= G) res = min(res, num);
        else {
            for (int i = D-1; i >= 0; --i) {
                if (bit & (1<<i)) continue;
                for (int j = 0; j < p[i]; ++j) {
                    if (sum >= G) break;
                    sum += 100 * (i+1);
                    ++num;
                }
            }
            res = min(res, num);
        }
        
    }
    cout << res << endl;
    
    return 0;
}
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> vec(n - 1);
    REP(i, n - 1)
    cin >> vec[i];
    vector<ll> a(n);
    a[0] = vec[0];
    REP(i, n - 1)
    {
        ll cand = max(a[i], vec[i]);
        if (i < n - 2)
        {
            cand = min(cand, vec[i + 1]);
        }
        a[i + 1] = cand;
    }
    cout << accumulate(ALL(a), (ll)0) << endl;
    return 0;
}
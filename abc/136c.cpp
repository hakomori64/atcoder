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
    vector<ll> a(n);
    REP(i, n)
    {
        cin >> a[i];
    }

    bool ok = true;
    bool ewithn = false;
    ll current = 0;
    REP(i, n - 1)
    {
        if (a[i] - a[i + 1] > 1)
        {
            ok = false;
            break;
        }
        if (a[i] - a[i + 1] == 1 && ewithn)
        {
            ok = false;
            break;
        }
        if (i > 0 && a[i] > a[i - 1])
            a[i]--;

        ewithn = (a[i] == a[i + 1]);
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}
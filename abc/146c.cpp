#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll cost(ll a, ll b, ll n) {
    return a * n + (to_string(n)).size() * b;
}

int main()
{
    cout << fixed;
    ll a, b, x; cin >> a >> b >> x;
    if (cost(a, b, 1000000000) <= x) {
        printf("%lld\n", (ll)1000000000);
        return 0;
    }
    ll left = 0, right = 1000000000;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if (cost(a, b, mid) <= x) left = mid;
        else right = mid;
    }

    printf("%lld\n", max((ll)0, left));

    return 0;
}
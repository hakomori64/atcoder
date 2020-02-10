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
    ll n; double k; cin >> n >> k;
    double ans = 0;
    FOR(i, 1, n + 1) {
        double num = max((double)0, ceil(log10(k / i) / log10(2)));
        ans += pow((double)1 / 2, num);
    }
    printf("%.12f\n", (double)1 / n * ans);
    return 0;
}
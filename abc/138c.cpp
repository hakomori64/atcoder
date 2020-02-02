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
    vector<double> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(ALL(v));

    double current = v[0];
    FOR(i, 1, n) {
        current = (current + v[i]) / 2;
    }
    printf("%.12f\n", current);
    
    return 0;
}
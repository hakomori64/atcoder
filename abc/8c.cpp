#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll n; cin >> n;
    vll c(n);
    rep(i, n) cin >> c[i];
    double res = 0;
    for (int i = 0; i < n; i++) {
        long divisor = 0;
        for (int j = 0; j < n; j++) {
            if (c[i] % c[j] == 0) divisor++;
        }
        divisor--;
        if (divisor % 2 == 1) {
            res += 0.5;
        } else {
            res += ((double)divisor + 2.0) / (2 * (double)divisor + 2);
        }
    }
    printf("%.15f\n", res);
    return 0;
}
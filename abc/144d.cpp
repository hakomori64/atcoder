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
    double a, b, x; cin >> a >> b >> x;
    double ans;
    if (x <= a * a * b / 2) {
        ans = atan(a * b * b / (2 * x));
    } else {
        ans = abs(atan(2 / pow(a, 3) * (x - a * a * b)));
    }
    printf("%.12f\n", ans * 180 / M_PI);
    return 0;
}
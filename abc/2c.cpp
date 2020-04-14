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
    ll xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
    ll a = xb - xa, c = xc - xa;
    ll b = yb - ya, d = yc - ya;
    double num = (double)abs(a * d - b * c) / 2;
    printf("%.15f\n", num);
    return 0;
}
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
    ll n, k; cin >> n >> k;
    vector<double> p(n+1);
    p[0] = 0;
    rep(i, n) {
        double num; cin >> num;
        p[i + 1] = p[i] + (num + 1) / 2;
    }

    double max_num = 0;
    rep(i, n - k + 1) {
        max_num = max(p[i + k] - p[i], max_num);
    }

    printf("%.12f\n", max_num);

    return 0;
}
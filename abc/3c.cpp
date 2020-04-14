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
    vll r(n);
    rep(i, n) cin >> r[i];
    /**
     * n : 動画数
     * k : 高橋くんがみられる動画数
     */
    sort(all(r));
    double rate = 0;
    for (int i = n - k; i < n; i++) {
        rate = (rate + r[i]) / 2;
    }
    printf("%.15f\n", rate);
    return 0;
}
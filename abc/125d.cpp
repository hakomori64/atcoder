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
    vll a(n);
    rep(i, n) cin >> a[i];
    ll min_num = inf;
    ll n_count = 0;
    rep(i, n) {
        if (a[i] < 0) {
            n_count++;
            a[i] *= -1;
        }
        min_num = min(min_num, abs(a[i]));
    }
    ll sum = accumulate(all(a), 0ll);
    if (n_count % 2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum - min_num * 2 << endl;
    }
    return 0;
}
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
    vll x(n);
    rep(i, n) cin >> x[i];
    sort(all(x));
    ll min_num = inf;
    for (ll p = x[0]; p <= x[x.size()-1]; p++) {
        ll num = 0;
        for (auto elem : x) {
            num += (ll)pow(abs(elem - p), 2);
        }
        min_num = min(num, min_num);
    }
    cout << min_num << endl;
    return 0;
}
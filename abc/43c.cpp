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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));
    ll mi = a[0], ma = a[a.size()-1];
    ll misum = inf;
    for (ll cand = mi; cand <= ma; cand++) {
        ll _sum = 0;
        for (auto elem : a) {
            _sum += pow(elem - cand, 2);
        }
        misum = min(misum, _sum);
    }
    cout << misum << endl;
    return 0;
}
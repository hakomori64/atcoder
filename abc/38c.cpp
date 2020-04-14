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
    a.push_back(0);
    ll left = 0, count = 0;
    rep(i, n) {
        if (a[i] >= a[i+1]) {
            ll num = i - left + 1;
            count += num + (num) * (num - 1) / 2;
            left = i + 1;
        }
    }
    cout << count << endl;
    return 0;
}
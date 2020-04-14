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
    vll imos(1e6+10);
    rep(i, n) {
        ll a, b; cin >> a >> b;
        imos[a]++, imos[b+1]--;
    }
    for (int i = 1; i < 1e6+10; i++) {
        imos[i] += imos[i-1];
    }
    cout << *max_element(all(imos)) << endl;
    return 0;
}
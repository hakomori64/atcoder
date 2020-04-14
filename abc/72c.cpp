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
    vector<ll> imos(100002);
    ll n; cin >> n;
    rep(i, n) {
        ll m; cin >> m;
        imos[m]++; imos[m+3]--;
    }


    vector<ll> h(100002);
    rep(i, imos.size()) {
        if (i == 0) h[i] = imos[i];
        else {
            h[i] = imos[i] + h[i-1];
        }
    }

    ll max_num = 0;
    ll index = 0;
    rep(i, h.size()) {
        if (h[i] > max_num) {
            max_num = h[i];
            index = i - 1;
        }
    }
    cout << max_num << endl;
    return 0;
}
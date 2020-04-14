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
    vector<ll> c(n-1), s(n-1), f(n-1);
    rep(i, n-1) {
        cin >> c[i] >> s[i] >> f[i];
    }
    rep(i, n-1) {
        ll time = 0;
        for (int j = i; j < n-1; j++) {
            time = max(time, s[j]);
            time += (f[j] - ((time - s[j]) % f[j])) % f[j];
            time += c[j];
        }
        cout << time << endl;
    }
    cout << 0 << endl;
    return 0;
}
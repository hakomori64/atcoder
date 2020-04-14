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
    vector<ll> t(n), x(n), y(n);

    rep(i, n) {
        cin >> t[i] >> x[i] >> y[i];
    }
    t.insert(t.begin(), 0), x.insert(x.begin(), 0), y.insert(y.begin(), 0);

    rep(i, n) {
        ll dx = abs(x[i+1] - x[i]);
        ll dy = abs(y[i+1] - y[i]);
        ll dt = abs(t[i+1] - t[i]);
        // cout << dt << " " << dx << " " << dy << endl;
        if (!(dt >= dx + dy && (dt - dx - dy) % 2 == 0)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
    
    return 0;
}
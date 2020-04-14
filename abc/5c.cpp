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
    ll t, n; cin >> t >> n;
    vll a(n);
    rep(i, n) cin >> a[i];
    ll m; cin >> m;
    vll b(m);
    rep(i, m) cin >> b[i];

    if (a.size() < b.size()) {
        cout << "no" << endl;
        return 0;
    }
    rep(i, m) {
        // 客の数だけ繰り返す
        int x = 1;
        rep(j, a.size()) {
            if (a[j] <= b[i] && b[i] - a[j] <= t) {
                a.erase(a.begin()+j);
                x = 0;
                break;
            }
        }
        if (x == 1) {
            // お客さんが食べられるたこ焼きがなかったら
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
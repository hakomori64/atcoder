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
    vll a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vll ans(n + 1, 0);
    for (int i = n; i >= 1; i--) {
        ll cnt = 0;
        for (int k = 2; i * k <= n; k++) {
            cnt += ans[k * i];
        }
        if (cnt % 2 != a[i]) {
            ans[i] = 1;
        }
    }

    cout << accumulate(all(ans), 0) << endl;
    for (int i = 1; i <= n; i++) {
        if (ans[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
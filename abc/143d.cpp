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
    vll l(n);
    rep(i, n) cin >> l[i];
    sort(all(l));
    ll cnt = 0;
    for (int a = 0; a < n - 2; a++) {
        for (int b = a + 1; b < n - 1; b++) {
            for (int c = b + 1; c < n; c++) {
                if (l[a] < l[b] + l[c] &&
                    l[b] < l[c] + l[a] &&
                    l[c] < l[a] + l[b]) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
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
    ll h, w, k;
    cin >> h >> w >> k;
    string s[h];
    rep(i, h) cin >> s[i];
    ll ans = 0;
    for (int i = k - 1; i <= h - k; i++) {
        for (int j = k - 1; j <= w - k; j++) {
            if (s[i][j] == 'x') {
                j += k - 2;
                continue;
            }
            bool pos = true;
            for (int r = 0; r < k; r++) {
                for (int c = 0; c <= k - r - 1; c++) {
                    if (s[i+r][j+c] == 'x' || s[i+r][j-c] == 'x' || s[i-r][j+c] == 'x' || s[i-r][j-c] == 'x') {
                        pos = false;
                        break;
                    }
                }
            }
            if (pos) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
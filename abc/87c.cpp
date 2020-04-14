#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> s(2, vector<ll>(n + 1));
    rep(i, 2)
    {
        rep(j, n)
        {
            cin >> s[i][j+1];
            s[i][j + 1] += s[i][j];
        }
    }

    ll max_num = 0;
    rep(i, n) {
        ll num = s[0][i+1] - s[1][i] + s[1][n];
        // cout << num << endl;
        max_num = max(max_num, num);
    }
    cout << max_num << endl;
    return 0;
}
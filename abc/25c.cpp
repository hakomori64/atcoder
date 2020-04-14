#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll b[2][3], c[3][2];
map<vvll, ll> memo;

ll calc_point(vvll fld) {
    ll res = 0;
    rep(i, 2) rep(j, 3) if (fld[i][j] == fld[i + 1][j]) res += b[i][j];
    rep(i, 3) rep(j, 2) if (fld[i][j] == fld[i][j+1]) res += c[i][j];

    return res;
}

ll dfs(vvll fld, ll turn) {
    if (turn == 9) return memo[fld] = calc_point(fld);
    if(memo.count(fld)) return memo[fld];
    ll tm = turn % 2;
    ll res = tm ? inf : -inf;
    rep(i, 3) rep(j, 3) {
        if (fld[i][j] != -1) continue;
        vvll temp = fld;
        temp[i][j] = tm;
        if (tm) {
            res = min(res, dfs(temp, turn + 1));
        } else {
            res = max(res, dfs(temp, turn + 1));
        }
    }
    return memo[fld] = res;
}

int main()
{
    ll sum = 0;
    rep(i, 2) rep(j, 3) {
        cin >> b[i][j];
        sum += b[i][j];
    }
    rep(i, 3) rep(j, 2) {
        cin >> c[i][j];
        sum += c[i][j];
    }

    vvll fld(3, vll(3, -1));
    ll ans = dfs(fld, 0);
    cout << ans << endl;
    cout << sum - ans << endl;
    return 0;
}
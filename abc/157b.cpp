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
    vvll card(3, vll(3));
    rep(i, 3) rep(j, 3) {
        cin >> card[i][j];
    }
    ll n; cin >> n;
    vll b(n);
    rep(i, n) cin >> b[i];
    vector<vector<bool>> ok(3, vector<bool>(3, false));
    rep(k, n) {
        rep(i, 3) rep(j, 3) {
            if (card[i][j] == b[k]) ok[i][j] = true;
        }
    }
    
    bool isok = false;
    rep(i, 3) {
        isok |= (ok[i][0] && ok[i][1] && ok[i][2]);
    }
    rep(j, 3) {
        isok |= (ok[0][j] && ok[1][j] && ok[2][j]);
    }

    isok |= (ok[0][0] && ok[1][1] && ok[2][2]);
    isok |= (ok[2][0] && ok[1][1] && ok[0][2]);

    cout << (isok ? "Yes" : "No") << endl;
    return 0;
}
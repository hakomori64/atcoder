#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll n, k;
vvll t;

bool dfs(ll _n, ll x) {
    if (_n == n) {
        return x == 0;
    }

    bool isok = false;
    rep(i, k) {
        isok = (isok || dfs(_n + 1, x^t[_n][i]));
    }
    return isok;
}

int main()
{
    cin >> n >> k;
    t.resize(n);
    rep(i, n) {
        t[i].resize(k);
        rep(j, k) cin >> t[i][j];
    }
    
    cout << (dfs(0, 0) ? "Found" : "Nothing") << endl;
    return 0;
}
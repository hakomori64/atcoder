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
    ll R, C, K, N; cin >> R >> C >> K >> N;
    vll r(N), c(N), rcnt(R, 0), ccnt(C, 0);
    for (int i = 0; i < N; i++) {
        cin >> r[i] >> c[i]; r[i]--, c[i]--;
        rcnt[r[i]]++;
        ccnt[c[i]]++;
    }
    // for (auto elem : rcnt) cout << elem << " "; cout << endl;
    // for (auto elem : ccnt) cout << elem << " "; cout << endl;

    vll rs(N+1, 0);
    vll cs(N+1, 0);
    rep(i, R) rs[rcnt[i]]++;
    rep(i, C) cs[ccnt[i]]++;
    // for (auto elem : rs) cout << elem << " "; cout << endl;
    // for (auto elem : cs) cout << elem << " "; cout << endl;

    ll ans = 0;
    rep(i, K+1) {
        ans += rs[i]*cs[K-i];
    }

    rep(i, N) {
        ll t = rcnt[r[i]] + ccnt[c[i]];
        if (t == K) ans--;
        if (t == K + 1) ans++;
    }
    cout << ans << endl;

    return 0;
}
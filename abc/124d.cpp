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
    ll n, k; cin >> n >> k; string s; cin >> s;
    vll C;
    ll now = 1, cnt = 0;
    rep(i, n) {
        if (s[i] == (char)(now + '0')) cnt++;
        else {
            C.push_back(cnt);
            now = 1 - now;
            cnt = 1;
        }
    }
    C.push_back(cnt);
    //for (auto elem : C) cout << elem << " "; cout << endl;
    if (C.size() % 2 == 0) C.push_back(0);

    ll m = C.size();
    vll S(m + 1); rep(i, m) S[i + 1] = S[i] + C[i];

    // for (auto elem : S) cout << elem << " "; cout << endl;

    ll ans = 0;
    for (int i = 0; i < m; i += 2) {
        ll left = i;
        ll right = min(i + 2 * k + 1, m);
        ans = max(ans, S[right] - S[left]);
    }
    cout << ans << endl;
    return 0;
}
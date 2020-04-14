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
    ll n, m; cin >> n >> m;
    map<ll, vector<ll>> mp;
    priority_queue<ll, vector<ll>> que;
    rep(i, n) {
        ll a, b; cin >> a >> b;
        if (a > m) continue;
        mp[a].push_back(b);
    }

    ll sum = 0;

    for (int i = 1; i <= m; i++) {
        if (mp.find(i) != mp.end()) {
            for (auto elem : mp[i]) {
                que.push(elem);
            }
        }
        if (que.size()) {
            sum += que.top(); que.pop();
        }
    }
    cout << sum << endl;

    return 0;
}
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
    priority_queue<ll> que;
    rep(i, n) {
        ll num; cin >> num;
        que.push(num);
    }

    rep(i, m) {
        ll num = que.top(); que.pop();
        que.push(num / 2);
    }

    ll sum = 0;
    while (que.size()) {
        sum += que.top(); que.pop();
    }
    cout << sum << endl;
    return 0;
}
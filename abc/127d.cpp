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
    ll N, M; cin >> N >> M;
    map<ll, ll, greater<ll>> m;
    for (int i = 0; i < N; i++) {
        ll A;
        cin >> A;
        m[A]++;
    }
    for (int i = 0; i < M; i++) {
        ll B, C;
        cin >> B >> C;
        m[C] += B;
    }
    ll res = 0;
    ll cnt = 0;
    for (auto x : m) {
        ll d = N - cnt;
        if (d <= x.second) {
            res += d * x.first;
            break;
        } else {
            cnt += x.second;
            res += x.second * x.first;
        }
    }
    cout << res << endl;
    return 0;
}
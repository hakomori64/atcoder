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
    ll n; cin >> n;
    map<ll, ll> mp;
    ll max_num = 0;
    rep(i, n) {
        ll num; cin >> num;
        mp[num]++;
        max_num = max(max_num, num);
    }

    auto it = mp.begin();
    ll count = 0;
    while (it != mp.end()) {
        auto kv = *it;
        if (kv.first > max_num) break;
        if (kv.second <= 0) {
            it++;
            continue;
        };

        if (kv.second > 0) count++;
        ll num = kv.first;
        while (num <= max_num) {
            mp[num] = 0;
            num *= 2;
        }
        ++it;
    }
    cout << count << endl;
    return 0;
}
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
    map<string, ll> mp;
    rep(i, n) {
        string s; cin >> s;
        mp[s]++;
    }


    ll max_num = 0;
    for (auto elem : mp) {
        max_num = max(max_num, elem.second);
    }

    vector<string> ans;
    for (auto elem : mp) {
        if (elem.second == max_num) {
            ans.push_back(elem.first);
        }
    }
    sort(all(ans));
    rep(i, ans.size()) {
        cout << ans[i] << endl;
    }

    return 0;
}
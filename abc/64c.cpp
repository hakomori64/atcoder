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
    rep(i, n) {
        ll num; cin >> num;
        mp[num / 400]++;
    }

    ll count = 0, ext = 0;
    for (auto elem : mp) {
        if (elem.first < 8) count++;
        else ext += elem.second;
    }
    if (count == 0) {
        cout << 1 << " " << ext << endl;
    } else {
        cout << count << " " << count + ext << endl;
    }
    return 0;
}
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
    ll n, p; cin >> n >> p;
    string s; cin >> s;
    reverse(all(s));
    vll sums(n);
    ll mul = 1;
    rep(i, n) {
        ll num = s[i] - '0';
        if (i == 0) {
            sums[i] = (num * mul) % p;
        } else {
            sums[i] = ((num * mul) % p + sums[i - 1]) % p;
        }
        mul *= 10;
        mul %= p;
    }
    sums.insert(sums.begin(), 0);
    map<ll, ll> mp;
    ll count = 0;
    rep(i, sums.size()) {
        count += mp[sums[i] % p];
        mp[sums[i] % p]++;
    }
    cout << count << endl;
    return 0;
}
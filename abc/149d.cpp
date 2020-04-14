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
    ll n, k; cin >> n >> k;
    map<char, ll> mp;
    cin >> mp['s'] >> mp['p'] >> mp['r'];
    string s; cin >> s;
    vector<bool> iswin(n);
    ll score = 0;
    rep(i, n) {
        if (i < k) {
            iswin[i] = true;
            score += mp[s[i]];
            continue;
        }

        if (s[i] == s[i-k] && iswin[i-k]) iswin[i] = false;
        else {
            iswin[i] = true;
            score += mp[s[i]];
        }
    }
    cout << score << endl;
    return 0;
}
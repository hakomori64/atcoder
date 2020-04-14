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
    string s; cin >> s;
    s.push_back('+');
    ll count = 0;
    bool has_0 = false;
    rep(i, s.size()) {
        if (s[i] == '0') has_0 = true;
        if (s[i] == '+') {
            if (!has_0) count++;
            has_0 = false;
        }
    }
    cout << count << endl;
    return 0;
}
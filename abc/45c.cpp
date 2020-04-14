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
    ll t = 0;
    for (int bit = 0; bit < (1<<(s.size()-1)); bit++) {
        ll num = 0, left = 0;
        for (int i = 1; i < s.size(); i++) {
            if ((bit>>(i-1)) & 1) {
                ll m = stoll(s.substr(left, i - left));
                num += m;
                left = i;
            }
        }
        ll m = stoll(s.substr(left, s.size()-left));
        num += m;
        t += num;
    }
    cout << t << endl;
    return 0;
}
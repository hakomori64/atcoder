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
    string s; cin >> s;
    vll r, g, b;
    rep(i, s.size()) {
        if (s[i] == 'R') r.push_back(i);
        if (s[i] == 'G') g.push_back(i);
        if (s[i] == 'B') b.push_back(i);
    }
    //for (auto elem : r) cout << elem << " "; cout << endl;
    //for (auto elem : g) cout << elem << " "; cout << endl;
    //for (auto elem : b) cout << elem << " "; cout << endl;

    ll sum = 0;
    rep(i, r.size()) {
        rep(j, g.size()) {
            sum += b.size();
            if (r[i] < g[j]) {
                ll diff = g[j] - r[i];
                ll low = r[i] - (diff);
                if (0 <= low && s[low] == 'B') sum--;

                ll high = g[j] + diff;
                if (high < n && s[high] == 'B') sum--;

                ll middle = (r[i] + diff / 2);
                if (diff % 2 == 0 && s[middle] == 'B') sum--;
            } else {
                ll diff = r[i] - g[j];
                ll low = g[j] - diff;
                if (0 <= low && s[low] == 'B') sum--;

                ll high = r[i] + diff;
                if (high < n && s[high] == 'B') sum--;

                ll middle = (g[j] + diff / 2);
                if (diff % 2 == 0 && s[middle] == 'B') sum--;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
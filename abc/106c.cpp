#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    string s;
    cin >> s;
    ll k; cin >> k;
    set<char> st(s.begin(), s.end());
    if (st.size() == 1 && *st.begin() == '1') {
        cout << 1 << endl;
        return 0;
    }
    ll inf_index = -1;
    REP(i, s.size()) {
        if (s[i] != '1') {
            if (k - 1 < i) {
                cout << 1 << endl;
            } else {
                cout << s[i] << endl;
            }
            return 0; 
        }
    }
    return 0;
}
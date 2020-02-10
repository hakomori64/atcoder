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
    string s, t; cin >> s >> t;
    REP(i, s.size()) {
        if (s[i] == t[i]) continue;
        else {
            REP(j, s.size()) {
                // s[i]はt[i]に,t[i]はs[i]に置き換える。
                if (i == j) continue;
                if (s[j] == s[i]) {
                    if (t[j] != t[i] && j < i) {
                        cout << "No" << endl;
                        return 0;
                    }
                    s[j] = t[i];
                } else if (s[j] == t[i]) {
                    if (t[j] != s[i] && j < i) {
                        cout << "No" << endl;
                        return 0;
                    }
                    s[j] = s[i];
                }
            }
            s[i] = t[i];
        }
    }
    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
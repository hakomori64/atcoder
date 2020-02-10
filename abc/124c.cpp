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
    string s; cin >> s;
    string s1(ALL(s));
    string s2(ALL(s));
    reverse(ALL(s2));

    ll s1count = 0;
    FOR(i, 1,  s.size()) {
        if (s1[i] == s1[i-1]) {
            s1count++;
            if (s1[i] == '0') s1[i] = '1';
            else s1[i] = '0';
        }
    }

    ll s2count = 0;
    FOR(i, 1,  s.size()) {
        if (s2[i] == s2[i-1]) {
            s2count++;
            if (s2[i] == '0') s2[i] = '1';
            else s2[i] = '0';
        }
    }
    cout << min(s1count, s2count) << endl;
    return 0;
}
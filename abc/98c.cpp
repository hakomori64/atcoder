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
    ll n; cin >> n; string s; cin >> s;

    vector<ll> e(n, 0);
    REP(i, n) {
        if (i == 0) {
            e[i] = s[i] == 'E';
            continue;
        }

        e[i] = e[i-1] + (s[i] == 'E');
    }
    // for (auto elem : e) cout << elem << " "; cout << endl;

    ll min_num = INF;
    REP(i, n) {
        ll num = 0;
        if (i > 0) num += i - e[i-1];
        if (i < n-1) num += e[n-1] - e[i];

        min_num = min(min_num, num);
    }
    cout << min_num << endl;
    return 0;
}
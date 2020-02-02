#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



int main()
{
    ll n; cin >> n;
    map<string, ll> kind;
    ll kind_size = 0;
    ll count = 0;
    REP(i, n) {
        string _s; cin >> _s;
        sort(ALL(_s));
        kind[_s]++;
    }

    for (auto elem : kind) {
        count += elem.second * (elem.second - 1) / 2;
    }

    cout << count << endl;

    return 0;
}
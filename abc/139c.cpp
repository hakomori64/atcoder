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
    ll current_value = 0;
    ll max_length = 0;
    ll current_length = 0;
    REP(i, n) {
        ll value; cin >> value;
        if (i == 0) {
            current_value = value;
            continue;
        }
        if (current_value >= value) current_length++;
        else current_length = 0;

        if (current_length > max_length) max_length = current_length;

        current_value = value;
    }
    cout << max_length << endl;
    return 0;
}
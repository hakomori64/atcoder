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
    ll n; cin >> n;
    //vector<ll> a(n);
    ll count = 0;
    REP(i, n) {
        ll num; cin >> num;
        while (num % 2 == 0) {
            num /= 2;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
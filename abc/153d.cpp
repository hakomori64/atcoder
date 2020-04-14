#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll h;
    cin >> h;
    ll num = 1;
    ll count = 0;
    while (h > 0) {
        count += num;
        num *= 2;
        h /= 2;
    }
    cout << count << endl;
    return 0;
}
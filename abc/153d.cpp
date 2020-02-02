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
    ll num = 0;
    ll count = 0;
    while (h > 1) {
        num += pow(2, count);
        h /= 2;
        count++;
    }
    num += pow(2, count);
    cout << num << endl;
    return 0;
}
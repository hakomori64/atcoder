#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int a[20];
int x[20][20];
int y[20][20];

int main()
{
    int n; cin >> n;
    REP(i, n) {
        cin >> a[i];
        REP(j, a[i]) {
            cin >> x[i][j] >> y[i][j];
        }
    }
    int ans = 0;
    for(int bit=1; bit<(1<<n); bit++) {
        bool ok = true;
        REP(i, n) {
            if(!(bit&(1<<i))) continue;
            REP(j, a[i]) {
                if (((bit>>(x[i][j]-1))&1)!=y[i][j]) ok = 0;
            }
        }
        if (ok) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                count += ((bit>>i)&1);
            }
            ans = max(count, ans);
        }
    }
    cout << ans << endl;
    return 0;
}
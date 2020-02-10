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


int main()
{
    ll n; cin >> n;
    vector<ll> a(n+1);
    vector<ll> b(n);
    REP(i, n+1) cin >> a[i];
    REP(i, n) cin >> b[i];

    ll count = 0;
    REP(i, n) {
        if (a[i] >= b[i]) {
            count += b[i];
            a[i] -= b[i];
            b[i] = 0;
        } else {
            count += a[i];
            b[i] -= a[i];
            a[i] = 0;
            if (a[i+1] >= b[i]) {
                count += b[i];
                a[i+1] -= b[i];
                b[i] = 0;
            } else {
                count += a[i+1];
                b[i] -= a[i+1];
                a[i+1] = 0;
            }
        }
        //for (auto elem : a) cout << elem << " "; cout << endl;
        //for (auto elem : b) cout << elem << " "; cout << endl;
        // cout << endl;
    }
    // for (auto elem : a) cout << elem; cout << endl;
    // for (auto elem : b) cout << elem; cout << endl;
    cout << count << endl;
    return 0;
}
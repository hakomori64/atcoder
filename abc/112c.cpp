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
    vector<ll> points[n];
    REP(i, n) {
        ll x, y, h; cin >> x >> y >> h;
        points[i].push_back(x);
        points[i].push_back(y);
        points[i].push_back(h);
    }

    for (ll cx = 0; cx <= 100; cx++) {
        for (ll cy = 0; cy <= 100; cy++) {
            ll h;
            REP(i, n) {
                if (points[i][2] > 0) {
                    h = points[i][2] + abs(points[i][0] - cx) + abs(points[i][1] - cy);
                    break; 
                }
            }

            bool flg = true;
            REP(i, n) {
                if (max(h - abs(points[i][0]-cx) - abs(points[i][1] - cy), 0LL) != points[i][2]) flg = false;
            }

            if (flg) {
                cout << cx << " " << cy << " " << h << endl;
                return 0;
            }
        }
    }
    return 0;
}
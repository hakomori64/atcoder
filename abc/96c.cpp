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
    ll h, w; cin >> h >> w;
    vector<string> s(h);
    REP(i, h) cin >> s[i];

    int dx[] = {0, -1, 0, 1};
    int dy[] = {-1, 0, 1, 0};

    REP(y, h) {
        REP(x, w) {
            if (s[y][x] == '.') continue;

            bool isok = false;
            REP(i, 4) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (0 <= nx && nx <= w-1 && 0 <= ny && ny <= h-1) {
                    if (s[ny][nx] == '#') isok = true;
                }
            }

            if (!isok) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
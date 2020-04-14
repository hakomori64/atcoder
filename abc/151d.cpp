#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

ll h, w;
vector<string> board;

ll calc_max(pair<ll, ll> start) {
    ll maxn = 0;
    vvll wl(h, vll(w));
    rep(i, h) rep(j, w) {
        if (board[i][j] == '#') wl[i][j] = -1;
        else wl[i][j] = inf;
    }

    wl[start.second][start.first] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> que;
    que.push(start);

    while (!que.empty()) {
        auto point = que.top(); que.pop();
        ll x = point.first, y = point.second;
        rep(i, 4) {
            int nx = point.first + dx[i];
            int ny = point.second + dy[i];
            if (0 <= nx && nx < w && 0 <= ny && ny < h && wl[ny][nx] != -1 && wl[y][x] + 1 < wl[ny][nx]) {
                wl[ny][nx] = wl[y][x] + 1;
                que.push({nx, ny});
            }
        }
    }
    rep(i, h) {
        rep(j, w) {
            if (maxn < wl[i][j] && wl[i][j] != -1 && wl[i][j] != inf) maxn = wl[i][j];
        }
    }
    return maxn;
}

int main()
{
    cin >> h >> w;
    board.resize(h);
    rep(i, h) cin >> board[i];
    ll max_num = 0;
    rep(y, h) {
        rep(x, w) {
            if (board[y][x] == '#') continue;
            max_num = max(max_num, calc_max({x, y}));
        }
    }
    cout << max_num << endl;
    return 0;
}
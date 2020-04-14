#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> P;

ll dx[] = {-1, 0, 0, 1};
ll dy[] = {0, 1, -1, 0};

P S, G;
ll H, W, T;
char maze[15][15];

ll dijkstra(int C) {
    priority_queue<pair<ll, P>, vector<pair<ll, P>>, greater<pair<ll, P>>> que;
    que.push({0, S});

    vvll dst(H, vll(W, inf));
    dst[S.first][S.second] = 0;

    while (!que.empty()) {
        auto f = que.top(); que.pop();
        ll x = f.second.second;
        ll y = f.second.first;

        rep(i, 4) {
            ll nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= W || ny >= H) continue;

            ll cost = 1;
            if (maze[ny][nx] == '#') cost = C;
            if (dst[ny][nx] > dst[y][x] + cost) {
                dst[ny][nx] = dst[y][x] + cost;
                que.push({dst[ny][nx], {ny, nx}});
            }
        }
    }
    return dst[G.first][G.second];
}

int main()
{
    cin >> H >> W >> T;
    rep(i, H) rep(j, W) {
        cin >> maze[i][j];
        if (maze[i][j] == 'S') S = {i, j};
        if (maze[i][j] == 'G') G = {i, j};
    }

    ll l = 0, r = T;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        if (dijkstra(m) <= T) l = m;
        else r = m;
    }
    cout << l << endl;
    return 0;
}
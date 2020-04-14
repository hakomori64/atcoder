#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll r, c;
pair<ll, ll> start, goal;
vector<string> board;
vvll d;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dijkstra() {
    queue<pair<ll, pair<ll, ll>>> que;
    // pair(cost, point(y, x))
    que.push({0, start});

    while (!que.empty()) {
        auto value = que.front(); que.pop();
        ll cost = value.first;
        ll y, x; tie(y, x) = value.second;
        rep(i, 4) {
            int ny = y + dy[i], nx = x + dx[i];
            if (0 <= ny && ny < r && 0 <= nx && nx < c && d[ny][nx] != -1 && d[y][x] + 1 < d[ny][nx]) {
                d[ny][nx] = d[y][x] + 1;
                que.push({d[ny][nx], {ny, nx}});
            }
        }
    }
}

int main()
{
    cin >> r >> c;
    cin >> start.first >> start.second >> goal.first >> goal.second;
    // start(y, x), goal(y, x)
    start.first--, start.second--, goal.first--, goal.second--;
    board.resize(r);
    rep(i, r) cin >> board[i];
    d.resize(r);
    rep(i, r) {
        d[i].resize(c);
        rep(j, c) {
            if (board[i][j] == '#') d[i][j] = -1;
            else d[i][j] = inf;
        }
    }

    d[start.first][start.second] = 0;
    dijkstra();
    cout << d[goal.first][goal.second] << endl;
    return 0;
}
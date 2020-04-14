#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    ll h, w; cin >> h >> w;
    vector<string> board(h);
    rep(i, h) cin >> board[i];
    vvll h_board(h, vll(w)), v_board(h, vll(w));
    ll count = 0;
    rep(i, h) {
        count = 0; 
        rep(j, w) {
            if (board[i][j] == '#') {
                count = 0;
            } else {
                count++;
                h_board[i][j] = count;
            }
        }
        count = -1;
        for (int j = w - 1; j >= 0; j--) {
            if (board[i][j] == '#') count = -1;
            else {
                count = max(count, h_board[i][j]);
                h_board[i][j] = count;
            }
        }
    }

    rep(j, w) {
        count = 0;
        rep(i, h) {
            if (board[i][j] == '#') {
                count = 0;
            } else {
                count++;
                v_board[i][j] = count;
            }
        }
        count = -1;
        for (int i = h - 1; i >= 0; i--) {
            if (board[i][j] == '#') count = -1;
            else {
                count = max(count, v_board[i][j]);
                v_board[i][j] = count;
            }
        }
    }

    /*
    for (auto elem1 : h_board) {
        for (auto elem : elem1) cout << elem << " "; cout << endl;
    }
    cout << endl;
    for (auto elem1 : v_board) {
        for (auto elem : elem1) cout << elem << " "; cout << endl;
    }
    cout << endl;
    */

   ll max_num = 0;
   rep(i, h) rep(j, w) {
       max_num = max(max_num, h_board[i][j] + v_board[i][j] - 1);
   }
   cout << max_num << endl;
    return 0;
}
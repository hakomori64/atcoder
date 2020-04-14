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
    if (h == 1 || w == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (w % 2 == 0 || h % 2 == 0) {
        cout << w * h / 2 << endl;
    } else {
        cout << w * h / 2 + 1 << endl;
    }
    return 0;
}
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
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    ll dx = x2 - x1, dy = y2 - y1;
    cout << string(dy, 'U');
    cout << string(dx, 'R');
    cout << string(dy, 'D');
    cout << string(dx, 'L');
    cout << 'L';
    cout << string(dy+1, 'U');
    cout << string(dx+1, 'R');
    cout << 'D';
    cout << 'R';
    cout << string(dy+1, 'D');
    cout << string(dx+1, 'L');
    cout << 'U' << endl;
    return 0;
}
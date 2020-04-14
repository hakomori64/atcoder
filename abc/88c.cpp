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
    vector<vector<ll>> c(3, vector<ll>(3));
    rep(i, 9) cin >> c[i/3][i%3];
    vector<ll> a(3), b(3);
    a[0] = 0;
    rep(i, 3) b[i] = c[0][i] - a[i];
    ll a21 = c[1][0] - b[0], a22 = c[1][1] - b[1], a23 = c[1][2] - b[2];
    if (!(a21 == a22 && a22 == a23)) {
        cout << "No" << endl;
        return 0;
    }
    ll a31 = c[2][0] - b[0], a32 = c[2][1] - b[1], a33 = c[2][2] - b[2];
    if (!(a31 == a32 && a32 == a33)) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
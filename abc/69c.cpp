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
    ll n; cin >> n;
    ll o = 0, e = 0, e4 = 0;
    rep(i, n) {
        ll num; cin >> num;
        if (num % 4 == 0) {
            e4++;
        } else if (num % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    if (e == 0) {
        if (o <= e4 + 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (o <= e4) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
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
    ll n, r; cin >> n >> r;
    if (n >= 10) {
        cout << r << endl;
    } else {
        cout << r + 100 * (10 - n) << endl;
    }
    return 0;
}
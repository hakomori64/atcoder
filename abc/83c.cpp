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
    ll x, y; cin >> x >> y;
    ll count = 0;
    while (x <= y) {
        x *= 2;
        count++;
    }
    cout << count << endl;
    return 0;
}
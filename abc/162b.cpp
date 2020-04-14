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
    ll s = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0 && i % 5 != 0) s += i;
    }
    cout << s << endl;
    return 0;
}
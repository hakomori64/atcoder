#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define for(i, m, n) for (ll i = m; i < n; i++)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    string s, t;
    cin >> s >> t;
    ll a, b; cin >> a >> b;
    string u; cin >> u;
    if (s == u) a--;
    else if (t == u) b--;

    cout << a << " " << b << endl;
    return 0;
}
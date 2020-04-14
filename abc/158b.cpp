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
    ll n, a, b; cin >> n >> a >> b;
    ll sum = 0;
    sum += n / (a + b) * a;
    n -= n / (a + b) * (a + b);
    if (n <= a) {
        sum += n;
    } else {
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
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
    double a, b; cin >> a >> b;
    for (int i = ceil(a / 0.08); i < floor((a + 1) / 0.08); i++) {
        if (b / 0.1 <= i && i < (b + 1) / 0.1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
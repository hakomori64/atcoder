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
    long double a, b, c; cin >> a >> b >> c;
    if (sqrt(a) + sqrt(b) < sqrt(c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
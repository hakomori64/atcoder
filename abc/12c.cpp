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
    ll sum = 2025;
    ll n; cin >> n; n = sum - n;
    for (int i = 1; i <= 9; i++) {
        if (n % i == 0 && 1 <= (n / i) && (n / i) <= 9) {
            cout << i << " x " << n / i << endl;
        }
    }
    return 0;
}
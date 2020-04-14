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
    rep(i, n) {
        ll num; cin >> num;
        if (num % 2 == 0) {
            if (!(num % 3 == 0 || num % 5 == 0)) {
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
    return 0;
}
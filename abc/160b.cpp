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
    ll sum = 0;
    sum += (n / 500) * 1000;
    n -= (n / 500) * 500;
    sum += (n / 5) * 5;
    cout << sum << endl;
    return 0;
}
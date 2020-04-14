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
    ll x ; cin >> x;
    ll c = 0;
    ll i = 1;
    while (c + i < x) {
        c += i;
        i++;
    }
    cout << i << endl;
    return 0;
}
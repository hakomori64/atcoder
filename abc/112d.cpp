#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vll getPrimeFactorize(ll m) {
    vll v;
    for (int i = 1; i <= sqrt(m); i++) {
        if (m % i == 0) v.push_back(i), v.push_back(m / i);
    }
    sort(all(v));
    return v;
}

int main()
{
    ll N, M; cin >> N >> M;
    vll v = getPrimeFactorize(M);
    ll mn;
    for (ll x : v) {
        if (M / x >= N) {
            mn = x;
        } else {
            break;
        }
    }
    cout << mn << endl;
    return 0;
}
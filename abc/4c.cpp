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
    vll cards{1, 2, 3, 4, 5, 6};
    ll n; cin >> n; n % 30;
    rep(i, n) {
        swap(cards[(i % 5)], cards[i % 5 + 1]);
    }
    for (auto elem : cards) cout << elem; cout << endl;
    return 0;
}
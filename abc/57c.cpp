#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll f(ll a, ll b) {
    return max(to_string(a).size(), to_string(b).size());
}

int main()
{
    ll n; cin >> n;
    ll min_num = inf;
    for (size_t i = 1; i < sqrt(n) + 1; i++)
    {
        if (n % i != 0) continue;
        min_num = min(min_num, f(i, n / i));
    }
    cout << min_num << endl;
    
    return 0;
}
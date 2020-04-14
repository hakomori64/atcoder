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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll t_max = -inf;
    for (size_t i = 0; i < n; i++) // 高橋くんが選んだ番号
    {
        ll a_max = -inf;
        ll t = 0;
        for (size_t j = 0; j < n; j++) // 青木くんが選んだ番号
        {
            if (i == j) continue;
            ll t_point = 0;
            ll a_point = 0;
            for (int k = min(i, j); k <= max(i, j); k+=2) {
                t_point += a[k];
            }
            for (int k = min(i, j) + 1; k <= max(i, j); k+=2) {
                a_point += a[k];
            }
            if (a_point > a_max) {
                a_max = a_point;
                t = t_point;
            }
        }
        t_max = max(t, t_max);
    }
    cout << t_max << endl;
    
    return 0;
}
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
    vector<ll> n(4);
    rep(i, 4) {
        char c; cin >> c;
        n[i] = c - '0';
    }

    // for (auto elem : n) cout << elem << " "; cout << endl;

    for (int i = 0; i < 8; i++)
    {
        ll num = n[0];
        rep(j, 3) {
            num += (((i>>j) & 1) ? n[j+1] : -n[j+1]);
        }
        if (num == 7) {
            cout << n[0];
            rep(j, 3) {
                cout << ((i>>j & 1) ? '+' : '-') << n[j+1];
            }
            cout << "=7" << endl;
            return 0;
        }
    }
    
    return 0;
}
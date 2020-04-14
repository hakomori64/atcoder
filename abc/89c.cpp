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
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    string march = "MARCH";
    vector<ll> stat(5, 0);
    rep(i, 5) {
        rep(j, n) {
            if (s[j][0] == march[i]) stat[i]++;
        }
    }
    // for (auto elem : stat) cout << elem << " "; cout << endl;

    ll count = 0;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = i+1; j < 4; j++)
        {
            for (size_t k = j+1; k < 5; k++)
            {
                count += stat[i] * stat[j] * stat[k];
            }
            
        }
    }
    cout << count << endl;
    
    return 0;
}
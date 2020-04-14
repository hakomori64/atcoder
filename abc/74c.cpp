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
    ll A, B, C, D, E, F; cin >> A >> B >> C >> D >> E >> F;
    ll T = -1;
    ll S = 0;
    for (int a = 0; a * 100 <= F; a += A) {
        for (int b = 0; (a+b)*100 <= F; b += B) {
            for (int c = 0; (a+b)*100 + c <= F; c += C) {
                for (int d = 0; (a+b) * 100 + c + d <= F; d += D) {
                    int s = c + d;
                    int t = (a+b) * 100 + s;
                    if (s <= (a+b) * E && t > 0 && (T < 0 || S*t < s*T)) {
                        S = s;
                        T = t;
                    }
                }
            }
        }
    }
    cout << T << " " << S << endl;
    return 0;
}
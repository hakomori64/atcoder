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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    s.insert(s.begin(), 'R');
    s.push_back('L');
    ll cnt = 0;
    ll unhappy = 0;
    for (int i = 1; i < n + 2; i++) {
        if (s[i] == 'L' && s[i-1] == 'R') {
            cnt++;
            if (i == 1 || i == n + 1) {
                unhappy++;
            } else {
                unhappy += 2;
            }
        }
    }
    if (cnt == 1) {
        cout << n - 1 << endl;
        return 0;
    }
    cout << min(n - 1, n - unhappy + 2 * (min(cnt - 1, k))) << endl;
    return 0;
}
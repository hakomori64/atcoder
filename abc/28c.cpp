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
    ll a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    set<ll> vec;
    vec.insert(a + b + c);
    vec.insert(a + b + d);
    vec.insert(a + b + e);
    vec.insert(a + c + d);
    vec.insert(a + c + e);
    vec.insert(a + d + e);
    vec.insert(b + c + d);
    vec.insert(b + c + e);
    vec.insert(b + d + e);
    vec.insert(c + d + e);
    int i = 0;
    for (auto elem : vec) {
        if (vec.size() - i == 3) {
            cout << elem << endl;
        }
        i++;
    }
    return 0;
}
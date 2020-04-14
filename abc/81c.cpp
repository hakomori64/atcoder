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

    typedef function<bool(pair<ll, ll>, pair<ll, ll>)> comparator;
    comparator compfactor = [](pair<ll, ll> elem1, pair<ll, ll> elem2) {
        return elem1.second < elem2.second;
    };
    map<ll, ll> a;
    rep(i, n) {
        ll m; cin >> m;
        a[m]++;
    }

    // for (auto elem : a) {
    //     cout << elem.first << " " << elem.second << endl;
    // }

    if (a.size() <= k) {
        cout << 0 << endl;
        return 0;
    }
    vector<ll> v;
    for (auto elem : a) {
        v.push_back(elem.second);
    }
    sort(all(v));
    cout << accumulate(v.begin(), v.begin() + a.size() - k, 0) << endl;
    return 0;
}
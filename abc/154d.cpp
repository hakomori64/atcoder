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
    vector<double> p(n+1);
    p[0] = 0;
    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        p[i+1] = p[i] + (double)(num + 1) / 2;
    }
    // for (auto elem : p) cout << elem << " "; cout << endl;

    double max_num = 0;
    for (int i = 0; i < n - k + 1; i++) {
        max_num = max(max_num, p[i+k] - p[i]);
    }
    printf("%.12lf\n", max_num);

    return 0;
}
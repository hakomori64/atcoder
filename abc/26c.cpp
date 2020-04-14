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
    vvll rel(n); // i = boss_id - 1;
    for (int i = 1; i < n; i++) {
        ll boss; cin >> boss; boss--;
        rel[boss].push_back(i);
    }

    vector<ll> salary(n);
    for (ll id = n-1; id >= 0; id--)
    {
        if (rel[id].size() == 0) {
            salary[id] = 1;
            continue;
        }
        vll arr;
        for (auto elem : rel[id]) {
            arr.push_back(salary[elem]);
        }
        salary[id] = *max_element(all(arr)) + *min_element(all(arr)) + 1;
    }

    cout << salary[0] << endl;

    return 0;
}
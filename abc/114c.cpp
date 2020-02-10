#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

bool isok(ll num) {
    int c3 = 0, c5 = 0, c7 = 0;
    while (num > 0) {
        ll mod = num % 10;
        switch(mod) {
            case 3:
                c3++;
                break;
            case 5:
                c5++;
                break;
            case 7:
                c7++;
                break;
            default:
                return false;
        }
        num /= 10;
    }
    return (c3 && c7 && c5);
}

int main()
{
    ll n; cin >> n;
    ll count = 0;
    vector<ll> nums{3, 5, 7};
    queue<ll> q;
    for (auto elem : nums) {
        q.push(elem);
    }

    set<ll> cands;

    while (!q.empty()) {
        ll num = q.front();
        q.pop();
        if (num <= n) {
            if (isok(num)) cands.insert(num);
            q.push(num * 10 + 3);
            q.push(num * 10 + 5);
            q.push(num * 10 + 7);
        }
    }
    cout << cands.size() << endl;
    return 0;
}
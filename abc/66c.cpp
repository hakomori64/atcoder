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
    deque<ll> q;
    bool is_front = n % 2;
    rep(i, n) {
        ll num; cin >> num;
        if (is_front) q.push_front(num);
        else q.push_back(num);

        is_front = !is_front;
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;
    return 0;
}
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


int main()
{
    ll n; cin >> n;
    stack<ll> st;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n != 1) {
        if (n % 2 != 0) {
            st.push(1);
            n = (n - 1) / -2;
        } else {
            st.push(0);
            n /= -2;
        }
    }
    cout << 1;
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}
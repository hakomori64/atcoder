#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        int x = a;
        int y = b;
        a = y;
        b = x % y;
    }
    return a;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b) << endl;

    return 0;
}
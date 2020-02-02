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


int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> vec(n);
    REP(i, n) cin >> vec[i];

    if (n <= k) {
        cout << 0 << endl;
        return 0;
    }
    sort(ALL(vec));
    cout << accumulate(vec.begin(), vec.begin()+(n - k), (long long)0) << endl;

    return 0;
}
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
    int N; cin >> N;
    vector<int> h(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    int res = 0;
    while (true) {
        if (*max_element(ALL(h)) == 0) break;

        int i = 0;
        while (i < N) {
            if (h[i] == 0) ++i;
            else {
                ++res;
                while (i < N && h[i] > 0) {
                    --h[i];
                    ++i;
                }
            }
        }
    }
    cout << res << endl;
    
    return 0;
}
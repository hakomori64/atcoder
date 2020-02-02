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
    int h, n;
    cin >> h >> n;
    vector<pair<ll, ll>> vec(n);
    ll max_efic = 0;
    ll max_index = -1;
    ll max_damage = 0;
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        vec[i] = make_pair(a, b);
        double efic = (double)a / b;
        cout << efic << endl;
        if (efic > max_efic) {
            max_efic = efic;
            max_index = i;
        }
        if (a > max_damage) max_damage = a;
    }

    ll edm = vec[max_index].first;
    ll ecost = vec[max_index].second;

    ll mp_used = (h - max_damage) / edm * ecost;
    if (max_damage >= h) mp_used = 0;

    
    return 0;
}
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
    ll n; cin >> n;
    vector<pair<ll, ll>> vec(n);
    REP(i, n) {
        ll x, y;
        cin >> x >> y;
        vec[i] = make_pair(x, y);
    }
    vector<ll> order(n);
    REP(i, n) {
        order[i] = i;
    }

    vector<double> dists;
    do {
        double dist = 0;
        REP(i, n-1) {
            ll x1 = vec.at(order[i]).first, y1 = vec.at(order[i]).second;
            ll x2 = vec.at(order[i+1]).first, y2 =  vec.at(order[i+1]).second;
            double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            dist += d;
        }
        dists.push_back(dist);
    } while (next_permutation(ALL(order)));

    double num = accumulate(ALL(dists), 0.0) / dists.size();
    printf("%.10f\n", num);
    return 0;
}
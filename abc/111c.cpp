#include <bits/stdc++.h>
#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF LLONG_MAX
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    REP(i, n)
    cin >> v[i];
    // vector<pair<ll, ll>> e_max, o_max;
    map<ll, ll> e_count, o_count;
    for (int i = 0; i < n; i += 2)
    {
        e_count[v[i]]++;
        o_count[v[i + 1]]++;
    }

    pair<ll, ll> e_max_pair = make_pair(-1, -1);
    pair<ll, ll> o_max_pair = make_pair(-1, -1);
    for (auto elem : e_count)
    {
        if (elem.second > e_max_pair.second)
            e_max_pair = elem;
    }
    e_count.erase(e_max_pair.first);

    for (auto elem : o_count)
    {
        if (elem.second > o_max_pair.second)
            o_max_pair = elem;
    }
    o_count.erase(o_max_pair.first);

    if (e_max_pair.first == o_max_pair.first)
    {
        pair<ll, ll> e_second_max_pair = make_pair(-1, -1);
        pair<ll, ll> o_second_max_pair = make_pair(-1, -1);
        for (auto elem : e_count)
        {
            if (elem.second > e_second_max_pair.second)
                e_second_max_pair = elem;
        }
        e_count.erase(e_second_max_pair.first);

        for (auto elem : o_count)
        {
            if (elem.second > o_second_max_pair.second)
                o_second_max_pair = elem;
        }
        o_count.erase(o_second_max_pair.first);

        if (e_second_max_pair.second > o_second_max_pair.second) {
            e_max_pair = e_second_max_pair;
        } else {
            o_max_pair = o_second_max_pair;
        }
    }

    ll count = 0;
    for (size_t i = 0; i < n; i+=2) {
        if (v[i] != e_max_pair.first) count++;
        if (v[i+1] != o_max_pair.first) count++;
    }
    cout << count << endl;

    return 0;
}
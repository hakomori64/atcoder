#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll n;
vector<string> cand;

void dfs(string s) {
    if (s.size() == n) {
        cand.push_back(s);
        return;
    }
    dfs(s + 'a');
    dfs(s + 'b');
    dfs(s + 'c');
}

int main()
{
    cin >> n;
    dfs("");
    sort(all(cand));
    for (auto elem : cand) {
        cout << elem << endl;
    }
    return 0;
}
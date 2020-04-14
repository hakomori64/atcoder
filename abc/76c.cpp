#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vector<string> cand;

void restore(string s, string t, int index) {
    rep(i, t.size()) {
        s[index + i] = t[i];
    }
    rep(i, s.size()) {
        if (s[i] == '?') s[i] = 'a';
    }
    cand.push_back(s);
}

int main()
{
    string s, t; cin >> s >> t;
    rep(i, s.size() - t.size() + 1) {
        bool isok = true;
        rep (j, t.size()) {
            if (s[i + j] == '?') continue;
            if (s[i + j] != t[j]) {isok = false; break;};
        }
        if (isok) restore(s, t, i);
    }
    sort(all(cand));
    cout << (cand.size() ? cand[0] : "UNRESTORABLE") << endl;
    return 0;
}
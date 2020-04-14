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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> _m; // sの文字の種類と個数を調べる
    for (auto c : s) ++_m[c];

    string t;
    while (t.size() < s.size()) {
        for (char c = 'a'; c <= 'z'; ++c) {
            // まだ利用可能なsの文字列で辞書順で小さいものを使う
            if ((count(all(t), c) >= count(all(s), c))) continue;
            string u = t + c;

            int x = 0;
            map<char, int> m = _m;
            for (int i = 0; i < u.size(); ++i) {
                x += (u[i] != s[i]);
                --m[u[i]];
            }
            // 最初のu.size()文字でもうすでにx個、元の文字列と異なる
            // mはまだ利用可能な文字の種類と個数

            for (int i = u.size(); i < s.size(); ++i) {
                // 残りの文字列は極力一致させるように努力する
                if (m[s[i]]) {
                    u += s[i];
                    --m[s[i]];
                } else {
                    ++x;
                }
            }

            if (x <= k) {
                // 条件を満たすようなら追加する。
                // 少なくともs[i]と同じ文字列を選んでいけばこの条件は満たせる
                t += c;
                break;
            }
        }
    }
    cout << t << endl;
    return 0;
}
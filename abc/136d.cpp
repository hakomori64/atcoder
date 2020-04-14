#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void print_res(string s) {
    // cout << s << endl;
    size_t pos = s.find("RL");
    ll size_before_r = pos;
    ll size_after_l = s.size() - pos - 2;
    rep(i, s.size()) {
        if (i < pos || pos + 1 < i) {
            cout << 0 << endl;
        } else {
            if (i == pos) {
                cout << size_before_r / 2 + (size_after_l - size_after_l / 2) + 1 << endl;
            } else {
                cout << size_after_l / 2 + (size_before_r - size_before_r / 2) + 1 << endl;
            }
        }
    }
}

int main()
{
    string s; cin >> s;
    size_t pos = s.find("LR");
    while (pos != string::npos) {
        print_res(s.substr(0, pos+1));
        s.erase(s.begin(), s.begin()+pos+1);
        pos = s.find("LR");
    }
    print_res(s);

    return 0;
}
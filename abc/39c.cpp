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
    string s; cin >> s;
    vector<string> answers{"Fas", "Fa", "Mi", "Res", "Re", "Dos", "Do", "Si", "Las", "La", "Sos", "So"};
    string Fas = "BWBWB";
    rep(base, s.size()) {
        bool is_do = true;
        // cout << "base: " << base << endl;
        rep(i, Fas.size()) {
            if (s[base + i] != Fas[i]) {
                is_do = false;
                break;
            }
        }
        if (is_do) {
            cout << answers[base] << endl;
            return 0;
        }
    }
    return 0;
}
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
    reverse(all(s));
    if (s.size () < 5) {
        cout << "NO" << endl;
        return 0;
    }
    while (s.size()) {
        if (s.size() >= 5 && (s.substr(0, 5) == "maerd" || s.substr(0, 5) == "esare")) {
            s.erase(s.begin(), s.begin()+5);
            continue;
        }
        if (s.size() >= 6 && s.substr(0, 6) == "resare") {
            s.erase(s.begin(), s.begin()+6);
            continue;
        }

        if (s.size() >= 7 && s.substr(0, 7) == "remaerd") {
            s.erase(s.begin(), s.begin()+7);
            continue;
        }

        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
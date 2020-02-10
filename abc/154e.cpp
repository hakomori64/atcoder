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
    string n; cin >> n;
    ll k; cin >> k;
    ll count = 0;
    string test('0', n.size());
    if (k == 1) {
        rep(i, n.size()) {
            for (int j = 1; j < 10; j++) {
                char num = '0' + j;
                test[i] = num;
                cout << test << endl;
                if (test <= n) count++;
            }
            test[i] = '0';
        }
        cout << count << endl;
        return 0;
    } else if (k == 2) {
        for (int i = 0; i < n.size()-1; i++) {
            for (int j = i + 1; j < n.size(); j++) {
                for (int k = 1; k < 10; k++) {
                    for (int l = 1; l < 10; l++) {
                        char num = '0' + k;
                        test[i] = num;
                        num = '0' + l;
                        test[j] = num;

                        if (test == "25") {
                            cout << "isok? " << endl;
                            cout << (test == n) << endl;
                        }
                        if (test <= n) {
                            count++;
                            cout << test << endl;
                        }
                    }
                }
                test[j] = '0';
            }
            test[i] = '0';
        }
        cout << count << endl;
        return 0;
    } else if (k == 3) {
        return 0;
    }
    return 0;
}
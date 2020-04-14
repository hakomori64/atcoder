#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll a1, a2, a3;
vll a;

bool check_row() {
    rep(i, a1) {
        ll r1, r2, r3;
        r1 = a[i];
        if (i < a2) r2 = a[i + a1];
        else r2 = 1e5;
        if (i < a3) r3 = a[i + a1 + a2];
        else r3 = 1e6;

        if (!(r1 < r2 && r2 < r3)) return false;
    }
    return true;
}

bool check_col() {
    if (a1 > 1)
    for (int i = 1; i < a1; i++) {
        if (a[i] < a[i - 1]) return false;
    }

    if (a2 > 1)
    for (int i = a1 + 1; i < a1 + a2; i++) {
        if (a[i] < a[i - 1]) return false;
    }

    if (a3 > 1)
    for (int i = a1 + a2 + 1; i < a1 + a2 + a3; i++) {
        if (a[i] < a[i - 1]) return false;
    }
    return true;
}

int main()
{
    cin >> a1 >> a2 >> a3;
    a.resize(a1 + a2 + a3);
    rep(i, a1 + a2 + a3) {
        a[i] = i + 1;
    }
    //for (auto elem : a) cout << elem << " "; cout << endl;
    ll count = 0;

    do {
        if (check_row() && check_col()) {
            //for (auto elem : a) cout << elem << " "; cout << endl;
            count++;
        }
    } while (next_permutation(all(a)));
    cout << count << endl;
    return 0;
}
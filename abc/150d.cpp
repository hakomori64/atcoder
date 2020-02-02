#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> vec(n);

    for (int i = 0; i < n; i++) {
        ll num = 0;
        cin >> num;
        vec.at(i) = num / 2;
    }

    ll cand = vec.at(0);
    for (int i = 1; i < n; i++) {
        cand =  vec.at(i) / gcd(vec.at(i), cand) * cand;
    }

    ll count = 0;
    for (ll num = cand; num <= m; num += cand) {
        bool flag = true;
        for (auto elem : vec) {
            cout << num * 2 / elem << endl;
            if ((ll)(num * 2 / elem) % 2 == 0) {
                flag = false;
                break;    
            }
        }
        if (flag) count++;
    }
    
    cout << count << endl;
    return 0;
}

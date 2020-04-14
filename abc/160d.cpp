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
    ll n, x, y; cin >> n >> x >> y; x--, y--;
    rep(_k, n - 1) {
        ll k = _k + 1;
        ll count = 0;
        cout << "k: " << k << endl;
        for (ll start = 0; start < n; start++) {
            if (start <= x) {
                if (start + k <= x) {
                    count++;
                    cout << "h start: " << start << " end: " << start + k << endl;
                } else {
                    ll left = k - (x - start);
                    set<ll> st;
                    // don't use bridge
                    ll point = x + left;
                    if (start < point && point < y) {
                        st.insert(point);
                        cout << "hh start: " << start << " end: " << point << endl;
                    }

                    // use bridge and go left
                    point = y - (left - 1);
                    if (x + left < point && point < n) {
                        st.insert(point);
                        cout << "hhh start: " << start << " end: " << point << endl;
                    }

                    // use bridge and go right
                    point = y + (left - 1);
                    if (x + left < point && point < n) {
                        st.insert(point);
                        cout << "hhhh start: " << start << " end: " << point << endl;
                    }
                    count += st.size(); 
                }
            } else if (start <= y) {
                if (start + k <= y) {
                    ll left = k - (start - x);
                    if (left <= 0) {
                        ll point = start + k;
                        cout << "hhhhh point: " << point << endl;
                        cout << "hhhhh start: " << start << " end: " << point << endl;
                        count++;
                    } else {
                        set<ll> st;
                        ll point = start + k;
                        cout << "point: " << point << endl;
                        if (start + k < point && point < n) {
                            st.insert(point);
                            cout << "hhhhhh start: " << start << " end: " << point << endl;
                        }


                        point = y - (left - 1);
                        if (start + k < point && point < n) {
                            st.insert(point);
                            cout << "hhhhhhh start: " << start << " end: " << point << endl;
                        }


                        point = y + (left + 1);
                        if (start + k < point && point < n) {
                            st.insert(point);
                            cout << "start: " << start << " end: " << point << endl;
                        }


                        count += st.size();
                    }
                } else {
                    ll point = start + k;
                    if (point < n) {
                        count++;
                        cout << "start: " << start << " end: " << point << endl;
                    }
                }
            } else {
                ll point = start + k;
                if (point < n) {
                    count++;
                    cout << "start: " << start << " end: " << point << endl;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
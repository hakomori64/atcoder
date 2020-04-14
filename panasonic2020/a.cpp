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
    string s = "1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51";
    stringstream ss(s);
    ll k; cin >> k;
    
    ll count = 0;
    string token;
    while (count < k - 1) {
        getline(ss, token, ',');
        count++;
    }
    getline(ss, token, ',');
    if (token[token.size()-1] == ',') token.pop_back();
    if (token[0] == ' ') token.erase(token.begin());
    cout << token << endl;

    return 0;
}
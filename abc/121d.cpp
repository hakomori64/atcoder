#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

unsigned long long f(unsigned long long n) {
    if (n < 0) return 0;
    switch(n % 4) {
        case 0: return n;
        case 1: return 1;
        case 2: return n + 1;
        case 3: return 0;
    }
}

int main()
{
    unsigned long long a, b; cin >> a >> b;
    cout << (f(b) ^ f(a - 1)) << endl;
    return 0;
}
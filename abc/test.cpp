#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    long a, b;
    long f(long n) {
        switch(n%4) {
            case 0: return n;
            case 1: return 1;
            case 2: return n+1;
            case 3: return 0;
        }
    }
    return 0;
}
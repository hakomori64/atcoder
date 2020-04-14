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
    ll N, K; cin >> N >> K;
    vll A(N);
    rep(i, N) cin >> A[i];
    ll ans = 0;
    ll sum = 0;

    ll r = 0;
    rep(i, N) {
        while (sum < K) {
            if (r == N) break;
            else {
                sum += A[r];
                r++;
            }
        }
        if (sum < K) break;
        ans += N - r + 1;
        sum -= A[i];
    }
    cout << ans << endl;
    return 0;
}
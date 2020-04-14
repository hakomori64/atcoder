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
	ll n;
	cin >> n;
	vvll c(10, vll(10));
	for (int i = 1; i <= n; i++) {
		string _i = to_string(i);
		c[_i[0] - '0'][_i[_i.size()-1] - '0']++;
	}

	ll cnt = 0;
	rep(i, 10) rep(j, 10) {
		cnt += c[i][j] * c[j][i];
	}
	cout << cnt << endl;
	return 0;
}
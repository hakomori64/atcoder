#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll min_num = min(a, min(b, c));
    a -= min_num, b -= min_num, c -= min_num;
    ll count = 0;
    if (
        (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) ||
        (a % 2 == 1 && b % 2 == 1 && c % 2 == 1))
    {
        ll max_num = max(a, max(b, c));
        count += (max_num - a) / 2 + (max_num - b) / 2 + (max_num - c) / 2;
        cout << count << endl;
        return 0;
    }

    if (
        (a % 2 == 1 && b % 2 == 0 && c % 2 == 0) ||
        (a % 2 == 0 && b % 2 == 1 && c % 2 == 0) ||
        (a % 2 == 0 && b % 2 == 0 && c % 2 == 1))
    {
        count++;
        if (a % 2)
        {
            b++, c++;
        }
        else if (b % 2)
        {
            c++, a++;
        }
        else if (c % 2)
        {
            a++, b++;
        }
        ll max_num = max(a, max(b, c));
        count += (max_num - a) / 2 + (max_num - b) / 2 + (max_num - c) / 2;
        cout << count << endl;
        return 0;
    }

    if (
        (a % 2 == 0 && b % 2 == 1 && c % 2 == 1) ||
        (a % 2 == 1 && b % 2 == 0 && c % 2 == 1) ||
        (a % 2 == 1 && b % 2 == 1 && c % 2 == 0))
    {
        count++;
        if (a % 2 == 0)
        {
            b++, c++;
        }
        else if (b % 2 == 0)
        {
            c++, a++;
        }
        else if (c % 2 == 0)
        {
            a++, b++;
        }
        ll max_num = max(a, max(b, c));
        count += (max_num - a) / 2 + (max_num - b) / 2 + (max_num - c) / 2;
        cout << count << endl;
    }
    return 0;
}
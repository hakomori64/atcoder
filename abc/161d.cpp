#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vll lunlun;
ll K;
queue<string> que;

void dfs(string num) {
    if (lunlun.size() > K) return;

    ll top = num[0] - '0';
    if (top - 1 >= 0) {
        if (top - 1 > 0) lunlun.push_back(stoll(to_string(top - 1) + num));
        dfs(to_string(top - 1) + num);
    }
    if (top > 0) {
        lunlun.push_back(stoll(to_string(top) + num));
    }
    dfs(to_string(top) + num);

    if (top + 1 < 10) {
        lunlun.push_back(stoll(to_string(top + 1) + num));
        dfs(to_string(top + 1) + num);
    }
}

int main()
{
    cin >> K;
    if (K <= 12) {
        cout << K << endl;
        return 0;
    }

    rep(i, 10) {
        lunlun.push_back(i);
        que.push(to_string(i));
    }

    while (que.size()) {
        if (lunlun.size() > K + 1e6) break;

        string num = que.front();
        que.pop();

        ll top = num[0] - '0';
        if (top - 1 >= 0) {
            if (top - 1 > 0) lunlun.push_back(stoll(to_string(top - 1) + num));
            que.push(to_string(top - 1) + num);
        }
        if(top > 0 && top <= 9) {
            lunlun.push_back(stoll(to_string(top) + num));
        }
        que.push(to_string(top) + num);

        if (top + 1 < 10) {
            lunlun.push_back(stoll(to_string(top + 1) + num));
            que.push(to_string(top + 1) + num);
        }
    }

    sort(all(lunlun));
    //for (auto elem : lunlun) cout << elem << " "; cout << endl;
    cout << lunlun[K] << endl;

    return 0;
}